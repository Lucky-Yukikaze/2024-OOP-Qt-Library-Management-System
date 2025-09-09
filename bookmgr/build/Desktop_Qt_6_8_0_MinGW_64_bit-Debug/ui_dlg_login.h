/********************************************************************************
** Form generated from reading UI file 'dlg_login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_LOGIN_H
#define UI_DLG_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_Login
{
public:
    QGridLayout *gridLayout;
    QWidget *bg;
    QGridLayout *gridLayout_2;
    QLabel *lb_txt2;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QPushButton *btn_login;
    QPushButton *btn_exit;
    QLabel *lb_title;
    QLineEdit *le_password;
    QLabel *lb_txt1;
    QLineEdit *le_user;

    void setupUi(QDialog *Dlg_Login)
    {
        if (Dlg_Login->objectName().isEmpty())
            Dlg_Login->setObjectName("Dlg_Login");
        Dlg_Login->resize(309, 232);
        Dlg_Login->setToolTipDuration(-1);
        Dlg_Login->setStyleSheet(QString::fromUtf8("QLabel#lb_title{font: 20px '\351\273\221\344\275\223';}\n"
"QLabel#lb_txt1{font: 12px '\351\273\221\344\275\223';}\n"
"QLabel#lb_txt2{font: 12px '\351\273\221\344\275\223';}\n"
"QLineEdit{border-radius:4px;min-height:25px;border:1px solid gray;}\n"
"QPushButton{border-radius:4px;background:#409eff;color:white;font-size:10px;}\n"
"QWidget#bg{background:white;}"));
        gridLayout = new QGridLayout(Dlg_Login);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        bg = new QWidget(Dlg_Login);
        bg->setObjectName("bg");
        bg->setMinimumSize(QSize(0, 30));
        gridLayout_2 = new QGridLayout(bg);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lb_txt2 = new QLabel(bg);
        lb_txt2->setObjectName("lb_txt2");
        lb_txt2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lb_txt2, 2, 0, 1, 1);

        widget = new QWidget(bg);
        widget->setObjectName("widget");
        widget->setMaximumSize(QSize(16777215, 35));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setHorizontalSpacing(20);
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_login = new QPushButton(widget);
        btn_login->setObjectName("btn_login");
        btn_login->setMaximumSize(QSize(90, 20));

        gridLayout_3->addWidget(btn_login, 0, 0, 1, 1);

        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setMaximumSize(QSize(90, 20));

        gridLayout_3->addWidget(btn_exit, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 3, 0, 1, 3);

        lb_title = new QLabel(bg);
        lb_title->setObjectName("lb_title");
        lb_title->setMaximumSize(QSize(16777215, 60));
        lb_title->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lb_title, 0, 1, 1, 1);

        le_password = new QLineEdit(bg);
        le_password->setObjectName("le_password");
        le_password->setMaximumSize(QSize(140, 16777215));

        gridLayout_2->addWidget(le_password, 2, 1, 1, 2);

        lb_txt1 = new QLabel(bg);
        lb_txt1->setObjectName("lb_txt1");
        lb_txt1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lb_txt1, 1, 0, 1, 1);

        le_user = new QLineEdit(bg);
        le_user->setObjectName("le_user");
        le_user->setMaximumSize(QSize(140, 16777215));

        gridLayout_2->addWidget(le_user, 1, 1, 1, 2);


        gridLayout->addWidget(bg, 0, 0, 1, 1);


        retranslateUi(Dlg_Login);

        QMetaObject::connectSlotsByName(Dlg_Login);
    } // setupUi

    void retranslateUi(QDialog *Dlg_Login)
    {
        Dlg_Login->setWindowTitle(QCoreApplication::translate("Dlg_Login", "\347\231\273\345\275\225", nullptr));
        lb_txt2->setText(QCoreApplication::translate("Dlg_Login", "\345\257\206    \347\240\201  ", nullptr));
        btn_login->setText(QCoreApplication::translate("Dlg_Login", "\347\231\273\345\275\225", nullptr));
        btn_exit->setText(QCoreApplication::translate("Dlg_Login", "\351\200\200\345\207\272", nullptr));
        lb_title->setText(QCoreApplication::translate("Dlg_Login", "Qt\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        lb_txt1->setText(QCoreApplication::translate("Dlg_Login", "\347\224\250\346\210\267\346\230\265\347\247\260  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_Login: public Ui_Dlg_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_LOGIN_H
