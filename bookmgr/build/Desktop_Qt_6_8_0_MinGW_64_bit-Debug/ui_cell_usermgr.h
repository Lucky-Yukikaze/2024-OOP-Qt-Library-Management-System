/********************************************************************************
** Form generated from reading UI file 'cell_usermgr.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_USERMGR_H
#define UI_CELL_USERMGR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cell_UserMgr
{
public:
    QGridLayout *gridLayout_2;
    QLabel *lb_title;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *btn_del;
    QPushButton *btn_import;
    QLineEdit *le_search;
    QTableView *tableView;

    void setupUi(QWidget *Cell_UserMgr)
    {
        if (Cell_UserMgr->objectName().isEmpty())
            Cell_UserMgr->setObjectName("Cell_UserMgr");
        Cell_UserMgr->resize(503, 356);
        gridLayout_2 = new QGridLayout(Cell_UserMgr);
        gridLayout_2->setObjectName("gridLayout_2");
        lb_title = new QLabel(Cell_UserMgr);
        lb_title->setObjectName("lb_title");

        gridLayout_2->addWidget(lb_title, 0, 0, 1, 1);

        widget = new QWidget(Cell_UserMgr);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btn_del = new QPushButton(widget);
        btn_del->setObjectName("btn_del");

        gridLayout->addWidget(btn_del, 0, 3, 1, 1);

        btn_import = new QPushButton(widget);
        btn_import->setObjectName("btn_import");

        gridLayout->addWidget(btn_import, 0, 2, 1, 1);

        le_search = new QLineEdit(widget);
        le_search->setObjectName("le_search");

        gridLayout->addWidget(le_search, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        tableView = new QTableView(Cell_UserMgr);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);


        retranslateUi(Cell_UserMgr);

        QMetaObject::connectSlotsByName(Cell_UserMgr);
    } // setupUi

    void retranslateUi(QWidget *Cell_UserMgr)
    {
        Cell_UserMgr->setWindowTitle(QCoreApplication::translate("Cell_UserMgr", "Form", nullptr));
        Cell_UserMgr->setProperty("name", QVariant(QCoreApplication::translate("Cell_UserMgr", "bg", nullptr)));
        lb_title->setText(QCoreApplication::translate("Cell_UserMgr", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        lb_title->setProperty("name", QVariant(QCoreApplication::translate("Cell_UserMgr", "title", nullptr)));
        label->setText(QCoreApplication::translate("Cell_UserMgr", "\346\220\234\347\264\242", nullptr));
        label->setProperty("name", QVariant(QCoreApplication::translate("Cell_UserMgr", "lb", nullptr)));
        btn_del->setText(QCoreApplication::translate("Cell_UserMgr", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
        btn_del->setProperty("name", QVariant(QCoreApplication::translate("Cell_UserMgr", "btn", nullptr)));
        btn_import->setText(QCoreApplication::translate("Cell_UserMgr", "\347\224\250\346\210\267\345\257\274\345\205\245", nullptr));
        btn_import->setProperty("name", QVariant(QCoreApplication::translate("Cell_UserMgr", "btn", nullptr)));
        le_search->setProperty("name", QVariant(QCoreApplication::translate("Cell_UserMgr", "le", nullptr)));
        tableView->setProperty("name", QVariant(QCoreApplication::translate("Cell_UserMgr", "table", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class Cell_UserMgr: public Ui_Cell_UserMgr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_USERMGR_H
