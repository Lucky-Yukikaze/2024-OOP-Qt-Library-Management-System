#include "cell_record.h"
#include "dlg_Bookbr.h"
#include "ui_cell_record.h"
#include <lib/sqlmgr.h>
#include <QMessageBox>

Cell_Record::Cell_Record(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Cell_Record)
{
    ui->setupUi(this);
    ui->tableView->setModel(&m_model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
}

Cell_Record::~Cell_Record()
{
    delete ui;
}

void Cell_Record::initPage(QString strCondition)
{
    auto l = SqlMgr::getInstance()->getRecord(strCondition);
    m_model.clear();
    m_model.setHorizontalHeaderLabels(QStringList{"借阅Id","用户id","图书id","借阅时间","到期时间","用户昵称","书名"});
    for(int i = 0;i<l.size();i++)
    {
        QList<QStandardItem*> items;
        for(int j = 0;j<l[i].size();j++){
            items.append(new QStandardItem(l[i][j]));
        }

        m_model.appendRow(items);
    }
}

void Cell_Record::on_btn_clear_clicked()
{
    SqlMgr::getInstance()->clearRecord();
    initPage();
}


void Cell_Record::on_le_search_textChanged(const QString &arg1)
{
    QString strCond = QString("where username like '%%1%' or name like '%%1%'").arg(arg1);
    initPage(strCond);
}


void Cell_Record::on_pushButton_clicked()
{
    int r = ui->tableView->currentIndex().row();
    if(r<0){
        return;
    }
    auto id = m_model.item(r,2)->text();
    Dlg_BR dlg;
    dlg.setType(true);
    dlg.setBookId(id.toInt());
    int ret = dlg.exec();
    QMessageBox::information(nullptr,"信息",ret?"归还成功":"归还失败");
    if(ret){
        initPage();
    }
}

