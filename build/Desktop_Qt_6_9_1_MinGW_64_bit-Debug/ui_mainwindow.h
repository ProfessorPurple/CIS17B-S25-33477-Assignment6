/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_ID;
    QLineEdit *textBox_ID;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_ID_2;
    QLineEdit *textBox_Find_ID;
    QPushButton *btnFindItem;
    QPushButton *btnRemoveItem;
    QLabel *label_Desc;
    QLineEdit *textBox_Location;
    QLabel *label_location;
    QLineEdit *textBox_desc;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAddItem;
    QListWidget *listWidget;
    QPushButton *btnSortList;
    QPushButton *btnResetSort;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(551, 471);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionExit->setCheckable(false);
        actionExit->setChecked(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_ID = new QLabel(centralwidget);
        label_ID->setObjectName("label_ID");

        gridLayout_2->addWidget(label_ID, 0, 0, 1, 1);

        textBox_ID = new QLineEdit(centralwidget);
        textBox_ID->setObjectName("textBox_ID");

        gridLayout_2->addWidget(textBox_ID, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(72, 60, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 2, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");

        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        label_ID_2 = new QLabel(centralwidget);
        label_ID_2->setObjectName("label_ID_2");

        gridLayout->addWidget(label_ID_2, 1, 1, 1, 1);

        textBox_Find_ID = new QLineEdit(centralwidget);
        textBox_Find_ID->setObjectName("textBox_Find_ID");

        gridLayout->addWidget(textBox_Find_ID, 1, 2, 1, 2);

        btnFindItem = new QPushButton(centralwidget);
        btnFindItem->setObjectName("btnFindItem");

        gridLayout->addWidget(btnFindItem, 2, 2, 1, 1);

        btnRemoveItem = new QPushButton(centralwidget);
        btnRemoveItem->setObjectName("btnRemoveItem");

        gridLayout->addWidget(btnRemoveItem, 2, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 2, 4, 1);

        label_Desc = new QLabel(centralwidget);
        label_Desc->setObjectName("label_Desc");

        gridLayout_2->addWidget(label_Desc, 1, 0, 1, 1);

        textBox_Location = new QLineEdit(centralwidget);
        textBox_Location->setObjectName("textBox_Location");

        gridLayout_2->addWidget(textBox_Location, 1, 1, 1, 1);

        label_location = new QLabel(centralwidget);
        label_location->setObjectName("label_location");

        gridLayout_2->addWidget(label_location, 2, 0, 1, 1);

        textBox_desc = new QLineEdit(centralwidget);
        textBox_desc->setObjectName("textBox_desc");

        gridLayout_2->addWidget(textBox_desc, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 0, 1, 1);

        btnAddItem = new QPushButton(centralwidget);
        btnAddItem->setObjectName("btnAddItem");

        gridLayout_2->addWidget(btnAddItem, 3, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 2);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMinimumSize(QSize(491, 0));
        listWidget->setAcceptDrops(false);
        listWidget->setDragDropOverwriteMode(false);
        listWidget->setAlternatingRowColors(true);

        gridLayout_3->addWidget(listWidget, 1, 0, 1, 2);

        btnSortList = new QPushButton(centralwidget);
        btnSortList->setObjectName("btnSortList");

        gridLayout_3->addWidget(btnSortList, 2, 0, 1, 1);

        btnResetSort = new QPushButton(centralwidget);
        btnResetSort->setObjectName("btnResetSort");

        gridLayout_3->addWidget(btnResetSort, 2, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 551, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(textBox_ID, textBox_Location);
        QWidget::setTabOrder(textBox_Location, textBox_desc);
        QWidget::setTabOrder(textBox_desc, btnAddItem);
        QWidget::setTabOrder(btnAddItem, textBox_Find_ID);
        QWidget::setTabOrder(textBox_Find_ID, btnFindItem);
        QWidget::setTabOrder(btnFindItem, btnRemoveItem);
        QWidget::setTabOrder(btnRemoveItem, listWidget);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_ID->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_ID_2->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        btnFindItem->setText(QCoreApplication::translate("MainWindow", "Find Item", nullptr));
        btnRemoveItem->setText(QCoreApplication::translate("MainWindow", "Remove Item", nullptr));
        label_Desc->setText(QCoreApplication::translate("MainWindow", "Location:", nullptr));
        label_location->setText(QCoreApplication::translate("MainWindow", "Description:", nullptr));
        btnAddItem->setText(QCoreApplication::translate("MainWindow", "Add Item", nullptr));
#if QT_CONFIG(whatsthis)
        listWidget->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnSortList->setText(QCoreApplication::translate("MainWindow", "Ascending Sort", nullptr));
        btnResetSort->setText(QCoreApplication::translate("MainWindow", "Default Sort", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
