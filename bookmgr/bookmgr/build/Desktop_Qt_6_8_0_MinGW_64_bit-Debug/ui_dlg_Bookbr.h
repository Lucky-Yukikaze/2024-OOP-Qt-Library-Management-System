/********************************************************************************
** Form generated from reading UI file 'dlg_Bookbr.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_BOOKBR_H
#define UI_DLG_BOOKBR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_BR
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *le_user;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *btn_borrow;
    QPushButton *btn_cancel;
    QLineEdit *le_password;

    void setupUi(QDialog *Dlg_BR)
    {
        if (Dlg_BR->objectName().isEmpty())
            Dlg_BR->setObjectName("Dlg_BR");
        Dlg_BR->resize(274, 161);
        Dlg_BR->setStyleSheet(QString::fromUtf8("QPushButton{border-radius:4px;background:#409eff;color:white;font-size:12px;}\n"
"QWidget#bg{background:white;}"));
        gridLayout = new QGridLayout(Dlg_BR);
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(Dlg_BR);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(Dlg_BR);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        le_user = new QLineEdit(Dlg_BR);
        le_user->setObjectName("le_user");

        gridLayout->addWidget(le_user, 0, 1, 1, 1);

        widget = new QWidget(Dlg_BR);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(16777215, 35));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        btn_borrow = new QPushButton(widget);
        btn_borrow->setObjectName("btn_borrow");
        btn_borrow->setMinimumSize(QSize(10, 20));

        gridLayout_2->addWidget(btn_borrow, 0, 0, 1, 1);

        btn_cancel = new QPushButton(widget);
        btn_cancel->setObjectName("btn_cancel");
        btn_cancel->setMinimumSize(QSize(10, 20));

        gridLayout_2->addWidget(btn_cancel, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 2, 0, 1, 2);

        le_password = new QLineEdit(Dlg_BR);
        le_password->setObjectName("le_password");

        gridLayout->addWidget(le_password, 1, 1, 1, 1);


        retranslateUi(Dlg_BR);

        QMetaObject::connectSlotsByName(Dlg_BR);
    } // setupUi

    void retranslateUi(QDialog *Dlg_BR)
    {
        Dlg_BR->setWindowTitle(QCoreApplication::translate("Dlg_BR", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_BR", "\345\257\206     \347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("Dlg_BR", "\347\224\250\346\210\267\346\230\265\347\247\260", nullptr));
        btn_borrow->setText(QCoreApplication::translate("Dlg_BR", "\345\200\237\351\230\205", nullptr));
        btn_borrow->setProperty("name", QVariant(QCoreApplication::translate("Dlg_BR", "btn", nullptr)));
        btn_cancel->setText(QCoreApplication::translate("Dlg_BR", "\345\217\226\346\266\210", nullptr));
        btn_cancel->setProperty("name", QVariant(QCoreApplication::translate("Dlg_BR", "btn", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class Dlg_BR: public Ui_Dlg_BR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_BOOKBR_H
