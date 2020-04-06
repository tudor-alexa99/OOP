/********************************************************************************
** Form generated from reading UI file 'TaskManager_1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKMANAGER_1_H
#define UI_TASKMANAGER_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskManager_1Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TaskManager_1Class)
    {
        if (TaskManager_1Class->objectName().isEmpty())
            TaskManager_1Class->setObjectName(QString::fromUtf8("TaskManager_1Class"));
        TaskManager_1Class->resize(600, 400);
        menuBar = new QMenuBar(TaskManager_1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        TaskManager_1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TaskManager_1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TaskManager_1Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(TaskManager_1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TaskManager_1Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TaskManager_1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TaskManager_1Class->setStatusBar(statusBar);

        retranslateUi(TaskManager_1Class);

        QMetaObject::connectSlotsByName(TaskManager_1Class);
    } // setupUi

    void retranslateUi(QMainWindow *TaskManager_1Class)
    {
        TaskManager_1Class->setWindowTitle(QApplication::translate("TaskManager_1Class", "TaskManager_1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskManager_1Class: public Ui_TaskManager_1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKMANAGER_1_H
