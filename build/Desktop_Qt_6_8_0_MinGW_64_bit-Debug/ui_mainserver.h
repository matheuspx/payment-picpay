/********************************************************************************
** Form generated from reading UI file 'mainserver.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSERVER_H
#define UI_MAINSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainServer
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainServer)
    {
        if (MainServer->objectName().isEmpty())
            MainServer->setObjectName("MainServer");
        MainServer->resize(800, 600);
        centralwidget = new QWidget(MainServer);
        centralwidget->setObjectName("centralwidget");
        MainServer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainServer);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainServer->setMenuBar(menubar);
        statusbar = new QStatusBar(MainServer);
        statusbar->setObjectName("statusbar");
        MainServer->setStatusBar(statusbar);

        retranslateUi(MainServer);

        QMetaObject::connectSlotsByName(MainServer);
    } // setupUi

    void retranslateUi(QMainWindow *MainServer)
    {
        MainServer->setWindowTitle(QCoreApplication::translate("MainServer", "MainServer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainServer: public Ui_MainServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSERVER_H
