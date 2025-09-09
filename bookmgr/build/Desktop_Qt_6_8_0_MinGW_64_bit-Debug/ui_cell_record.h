/********************************************************************************
** Form generated from reading UI file 'cell_record.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_RECORD_H
#define UI_CELL_RECORD_H

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

class Ui_Cell_Record
{
public:
    QGridLayout *gridLayout_2;
    QLabel *lb_title;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *le_search;
    QPushButton *btn_clear;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QWidget *Cell_Record)
    {
        if (Cell_Record->objectName().isEmpty())
            Cell_Record->setObjectName("Cell_Record");
        Cell_Record->resize(520, 347);
        gridLayout_2 = new QGridLayout(Cell_Record);
        gridLayout_2->setObjectName("gridLayout_2");
        lb_title = new QLabel(Cell_Record);
        lb_title->setObjectName("lb_title");

        gridLayout_2->addWidget(lb_title, 0, 0, 1, 1);

        widget = new QWidget(Cell_Record);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        le_search = new QLineEdit(widget);
        le_search->setObjectName("le_search");

        gridLayout->addWidget(le_search, 1, 1, 1, 1);

        btn_clear = new QPushButton(widget);
        btn_clear->setObjectName("btn_clear");

        gridLayout->addWidget(btn_clear, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 4, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 2);

        tableView = new QTableView(Cell_Record);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 2, 0, 1, 2);


        retranslateUi(Cell_Record);

        QMetaObject::connectSlotsByName(Cell_Record);
    } // setupUi

    void retranslateUi(QWidget *Cell_Record)
    {
        Cell_Record->setWindowTitle(QCoreApplication::translate("Cell_Record", "Form", nullptr));
        Cell_Record->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "bg", nullptr)));
        lb_title->setText(QCoreApplication::translate("Cell_Record", "\345\200\237\351\230\205\350\256\260\345\275\225", nullptr));
        lb_title->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "title", nullptr)));
        label->setText(QCoreApplication::translate("Cell_Record", "\346\220\234\347\264\242", nullptr));
        label->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "lb", nullptr)));
        le_search->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "le", nullptr)));
        btn_clear->setText(QCoreApplication::translate("Cell_Record", "\346\270\205\347\251\272\350\256\260\345\275\225", nullptr));
        btn_clear->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "btn", nullptr)));
        pushButton->setText(QCoreApplication::translate("Cell_Record", "\345\275\222\350\277\230\351\200\211\344\270\255", nullptr));
        pushButton->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "btn", nullptr)));
        tableView->setProperty("name", QVariant(QCoreApplication::translate("Cell_Record", "table", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class Cell_Record: public Ui_Cell_Record {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_RECORD_H
