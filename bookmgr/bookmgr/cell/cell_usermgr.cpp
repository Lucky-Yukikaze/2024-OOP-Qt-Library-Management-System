#include "cell_usermgr.h"
#include "ui_cell_usermgr.h"
#include "lib/sqlmgr.h"
#include <QFileDialog>
#include <QMessageBox>
Cell_UserMgr::Cell_UserMgr(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_UserMgr)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    m_model.setHorizontalHeaderLabels(QStringList{"用户id","班级","权限","部门","用户名","密码","昵称"});
}

Cell_UserMgr::~Cell_UserMgr()
{
    delete ui;
}

void Cell_UserMgr::initPage(QString strCondition)
{
    //查询数据库并且显示
    auto l = SqlMgr::getInstance()->getUsers(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"用户id","班级","权限","部门","用户名","密码","昵称"});
    for(int i = 0;i<l.size();i++)
    {
        QList<QStandardItem*> items;
        for(int j = 0;j<l[i].size();j++){
            items.append(new QStandardItem(l[i][j]));
        }

        m_model.appendRow(items);
    }
}

void Cell_UserMgr::on_btn_del_clicked()
{
    //删除用户
    int r = ui->tableView->currentIndex().row();
    if(r<0){
        QMessageBox::information(nullptr,"信息","未选中用户");
    }
    else{
        auto id = m_model.item(r,0)->text();
        SqlMgr::getInstance()->delUser(id);
        initPage();
        }
}

void Cell_UserMgr::on_btn_import_clicked()
{
    //导入用户
    auto strPath = QFileDialog::getOpenFileName(nullptr,"输入文件路径");

    if(!strPath.isEmpty())
    {
        QFile f(strPath);
        f.open(QFile::ReadOnly);
        QVector<QStringList> vecData;
        while(!f.atEnd())
        {
            QString str = f.readLine();
            auto l = str.split(",");
            if(l.size()!=6)
            {
                QMessageBox::information(nullptr,"信息","导入失败");
                return;
            }
            if (!l.isEmpty()) {
                l[l.size()-1].chop(2);
                vecData.push_back(l);
            }
        }

        SqlMgr::getInstance()->addUser(vecData);
        ui->le_search->clear();
        initPage();
    }
}


void Cell_UserMgr::on_le_search_textChanged(const QString &arg1)
{
    //搜索用户
    QString strCond = QString("where username like '%%1%' or nickname like '%%1%'").arg(arg1);
    initPage(strCond);
}

