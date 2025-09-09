#include "dlg_Bookbr.h"
#include "ui_dlg_Bookbr.h"

#include <lib/sqlmgr.h>

Dlg_BR::Dlg_BR(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_BR)
{
    ui->setupUi(this);
}

Dlg_BR::~Dlg_BR()
{
    delete ui;
}

void Dlg_BR::setType(bool isReturn)
{
    m_isReturn = isReturn;
    ui->btn_borrow->setText("归还");
}

void Dlg_BR::setBookId(int id)
{
    m_bookid = id;
}

void Dlg_BR::on_btn_borrow_clicked()
{
    do{
        auto strName = ui->le_user->text();
        auto strPass = ui->le_password->text();
        int userid = 0;
        auto ret = SqlMgr::getInstance()->login(strName,strPass,userid);
        if(!ret){
            this->done(0);
            break;
        }
        if(m_isReturn){
            SqlMgr::getInstance()->returnbook(QString::number(userid),QString::number(m_bookid));
        }
        else{
            SqlMgr::getInstance()->borrowbook(QString::number(userid),QString::number(m_bookid));
        }
        this->done(1);
    }while(false);
}


void Dlg_BR::on_btn_cancel_clicked()
{
    this->done(0);
}

