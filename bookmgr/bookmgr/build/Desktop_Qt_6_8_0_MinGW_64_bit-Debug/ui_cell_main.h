/********************************************************************************
** Form generated from reading UI file 'cell_main.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CELL_MAIN_H
#define UI_CELL_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cell_Main
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QWidget *tool;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QToolButton *btn_user;
    QToolButton *btn_book;
    QToolButton *btn_his;
    QStackedWidget *stackedWidget;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *Cell_Main)
    {
        if (Cell_Main->objectName().isEmpty())
            Cell_Main->setObjectName("Cell_Main");
        Cell_Main->resize(600, 600);
        Cell_Main->setStyleSheet(QString::fromUtf8("QPushButton[name=\"btn\"]{border-radius:4px;background:#409eff;color:white;font-size:14px;min-height:18px;min-width	:70px;padding:4px}\n"
"\n"
"QPushButton[name=\"btn\"]:pressed{background:#3a8ee6}\n"
"QLineEdit[name=\"le\"]{border-radius:4px;min-height:25px;border:1px solid gray;max-width:250px;min-width:250px;}\n"
"QLabel[name=\"lb\"]{font: 15px '\351\273\221\344\275\223';}\n"
"QLabel[name=\"title\"]{font: 14px '\351\273\221\344\275\223';color:blue;}\n"
"QWidget[name=\"bg\"]{backround-color:white;}\n"
""));
        centralwidget = new QWidget(Cell_Main);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#tool{background:#4c4c4c;}\n"
"QWidget#tool QToolButton{border:none;background:#4c4c4c;color:white;min-height:40px;font-size:10px;padding-left:25px;}\n"
"QWidget#tool QToolButton:checked{background:#404040;}\n"
""));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tool = new QWidget(centralwidget);
        tool->setObjectName("tool");
        tool->setMinimumSize(QSize(120, 0));
        gridLayout = new QGridLayout(tool);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        btn_user = new QToolButton(tool);
        buttonGroup = new QButtonGroup(Cell_Main);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(btn_user);
        btn_user->setObjectName("btn_user");
        btn_user->setMinimumSize(QSize(120, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/tool.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_user->setIcon(icon);
        btn_user->setCheckable(true);
        btn_user->setChecked(true);
        btn_user->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btn_user, 1, 0, 1, 1);

        btn_book = new QToolButton(tool);
        buttonGroup->addButton(btn_book);
        btn_book->setObjectName("btn_book");
        btn_book->setMinimumSize(QSize(120, 40));
        btn_book->setIcon(icon);
        btn_book->setCheckable(true);
        btn_book->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btn_book, 2, 0, 1, 1);

        btn_his = new QToolButton(tool);
        buttonGroup->addButton(btn_his);
        btn_his->setObjectName("btn_his");
        btn_his->setMinimumSize(QSize(120, 40));
        btn_his->setIcon(icon);
        btn_his->setCheckable(true);
        btn_his->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(btn_his, 3, 0, 1, 1);


        gridLayout_2->addWidget(tool, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");

        gridLayout_2->addWidget(stackedWidget, 0, 1, 1, 1);

        Cell_Main->setCentralWidget(centralwidget);

        retranslateUi(Cell_Main);

        QMetaObject::connectSlotsByName(Cell_Main);
    } // setupUi

    void retranslateUi(QMainWindow *Cell_Main)
    {
        Cell_Main->setWindowTitle(QCoreApplication::translate("Cell_Main", "Qt\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        btn_user->setText(QCoreApplication::translate("Cell_Main", " \347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        btn_book->setText(QCoreApplication::translate("Cell_Main", " \345\233\276\344\271\246\347\256\241\347\220\206", nullptr));
        btn_his->setText(QCoreApplication::translate("Cell_Main", " \345\200\237\351\230\205\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cell_Main: public Ui_Cell_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CELL_MAIN_H
