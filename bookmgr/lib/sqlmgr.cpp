#include "sqlmgr.h"
#include <qcoreapplication.h>
#include <QCoreApplication>
#include <QSqlRecord>
#include <QSqlError>
#include <QDateTime>
SqlMgr* SqlMgr::instance = nullptr;
SqlMgr::SqlMgr() {

}

SqlMgr::~SqlMgr()
{

}

void SqlMgr::init()
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    qDebug()<<QSqlDatabase::drivers();
    QString strPath = QCoreApplication::applicationDirPath()+"/db/book.db";
    m_db.setDatabaseName(strPath);
    qDebug()<<m_db.open();
}

bool SqlMgr::login(QString strUser, QString strPass, int &Userid)
{
    QSqlQuery q(m_db);
    QString strSql = QString("select * from user where username ='%1' and password ='%2'").arg(strUser).arg(strPass);
    bool ret = q.exec(strSql);
    if(!ret){
        qDebug()<< q.lastError().text();
    }
    else{
        ret =q.next();
        if(ret){
            Userid = q.value(0).toInt();
        }
    }
    return ret;
}

QVector<QStringList> SqlMgr::getUsers(QString strCondition)
{
    //username like '%x% or nickname like '%t%''
    QSqlQuery q(m_db);
    QString strSql = QString("select * from user %1").arg(strCondition);

    QVector<QStringList> vec;
    bool ret = q.exec(strSql);
    if(!ret){
        qDebug()<< q.lastError().text();
    }
    else{
        int iCols = q.record().count();
        QStringList l;
        while(q.next()){
            l.clear();
            for(int i = 0;i<iCols;i++){
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}

void SqlMgr::addUser(QVector<QStringList> v)
{
    m_db.transaction();
    QSqlQuery q(m_db);
    for(auto it:v){
        QString strSql = QString("insert into user VALUES(NULL,'%1','%2','%3','%4','%5','%6');")
                .arg(it[0])
                .arg(it[1])
                .arg(it[2])
                .arg(it[3])
                .arg(it[4])
                .arg(it[5]);
        bool ret = q.exec(strSql);
        if(!ret){
            qDebug()<< q.lastError().text();
        }
    }
    m_db.commit();
}

void SqlMgr::delUser(QString strId)
{
    QSqlQuery q(m_db);
    QString strSql = QString("delete from user where userid =%1").arg(strId);
    bool ret = q.exec(strSql);
    if(!ret){
        qDebug()<< q.lastError().text();
    }
}

QVector<QStringList> SqlMgr::getBooks(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql = QString("select * from book %1").arg(strCondition);

    QVector<QStringList> vec;
    bool ret = q.exec(strSql);
    if(!ret){
        qDebug()<< q.lastError().text();
    }
    else{
        int iCols = q.record().count();
        QStringList l;
        while(q.next()){
            l.clear();
            for(int i = 0;i<iCols;i++){
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}

void SqlMgr::addBooks(QVector<QStringList> vec)
{
    if(0 == vec.size()){
        return;
    }
    auto ldata = vec[0];
    QSqlQuery q(m_db);
    QString strSql = QString("INSERT INTO book "
                             "values(null,'%1','%2','%3','%4','%5',%6,'')")
                         .arg(ldata[1])
                         .arg(ldata[2])
                         .arg(ldata[3])
                         .arg(ldata[4])
                         .arg(ldata[5])
                         .arg(ldata[6]);

    bool ret = q.exec(strSql);
    if(!ret){
        qDebug()<< q.lastError().text();
    }
}

void SqlMgr::UpdateBooks(QStringList ldata)
{
    QSqlQuery q(m_db);
    QString strSql = QString("UPDATE book "
                             "set name ='%1',price='%2',type1 ='%3',type2 ='%4',type3 ='%5',cnt ='%6'"
                             "where bookid=%7")
    .arg(ldata[1])
    .arg(ldata[2])
    .arg(ldata[3])
    .arg(ldata[4])
    .arg(ldata[5])
    .arg(ldata[6])
    .arg(ldata[0]);

    bool ret = q.exec(strSql);
    if(!ret){
        qDebug()<< q.lastError().text();
    }
}

QString SqlMgr::delBooks(QString strId)
{
    QString strRet;
    QSqlQuery q(m_db);
    QString strSql = QString("delete from book where bookid =%1").arg(strId);
    bool ret = q.exec(strSql);
    if(!ret){
        qDebug()<< q.lastError().text();
        strRet ="删除失败,请检查";
    }
    return strRet;
}

QString SqlMgr::returnbook(QString strUserId, QString strBookId)
{
    QSqlQuery q(m_db);
    QString strSql = QString("update book set cnt = cnt+1 where bookid=%1;").arg(strBookId);
    bool ret = q.exec(strSql);
    if(!ret){
        qDebug()<< q.lastError().text();
    }
    strSql = QString("delete from record where bookid =%1 and userid=%2 ").arg(strBookId).arg(strUserId);
    ret = q.exec(strSql);
    if(!ret){
        qDebug()<< q.lastError().text();
    }
    return QString("");
}

QString SqlMgr::borrowbook(QString strUserId, QString strBookId)
{
    // 实现图书借阅
    QSqlQuery q(m_db);

    // 更新图书数量
    QString strSql = QString("UPDATE book SET cnt = cnt-1 WHERE bookid='%1';").arg(strBookId);
    bool ret = q.exec(strSql);
    if(!ret){
        qDebug() << q.lastError().text();
        return "更新图书数量失败";
    }

    // 插入借阅记录
    QDateTime start = QDateTime::currentDateTime();
    QDateTime end = start.addDays(14); // 假设借期为14天

    strSql = QString("INSERT INTO record (userId, bookId, start, end) VALUES ('%1', '%2', '%3', '%4')")
                 .arg(strUserId)
                 .arg(strBookId)
                 .arg(start.toString("yyyy-MM-dd hh:mm:ss")) // 格式化借出时间
                 .arg(end.toString("yyyy-MM-dd hh:mm:ss")); // 格式化归还时间
    ret = q.exec(strSql);
    if(!ret){
        qDebug() << q.lastError().text();
        return "插入借阅记录失败";
    }
    return QString("借阅成功");
}

QVector<QStringList> SqlMgr::getRecord(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql = QString("SELECT record.id, record.userid, record.bookid, record.start, record.end, user.username, book.name "
                             "FROM record "
                             "JOIN user ON record.userid = user.userid "
                             "JOIN book ON record.bookid = book.bookid "
                             "%1").arg(strCondition);

    QVector<QStringList> vec;
    bool ret = q.exec(strSql);
    if(!ret){
        qDebug()<< q.lastError().text();
    }
    else{
        int iCols = q.record().count();
        QStringList l;
        while(q.next()){
            l.clear();
            for(int i = 0;i<iCols;i++){
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}

void SqlMgr::clearRecord() {
    QSqlQuery query1(m_db);
    QString sql1 = "DELETE FROM record;";
    if (!query1.exec(sql1)) {
        qDebug() << "Error deleting records from book table:" << query1.lastError().text();
        return;
    }
    QSqlQuery query2(m_db);
    QString sql2 = "DELETE FROM sqlite_sequence WHERE name = 'book';";
    if (!query2.exec(sql2)) {
        qDebug() << "Error resetting sequence for book in sqlite_sequence table:" << query2.lastError().text();
        return;
    }
    qDebug() << "Records deleted and sequence reset successfully.";
}

