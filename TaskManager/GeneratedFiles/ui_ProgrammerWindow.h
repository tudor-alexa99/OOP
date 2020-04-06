/********************************************************************************
** Form generated from reading UI file 'ProgrammerWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMMERWINDOW_H
#define UI_PROGRAMMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProgrammerWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *tasksListWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *descriptionLineEdit;
    QLabel *label_2;
    QLineEdit *idLineEdit;
    QPushButton *addButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *removeButton;
    QPushButton *startTaskButton;
    QPushButton *finishTaskButton;
    QFrame *line;

    void setupUi(QWidget *ProgrammerWindow)
    {
        if (ProgrammerWindow->objectName().isEmpty())
            ProgrammerWindow->setObjectName(QString::fromUtf8("ProgrammerWindow"));
        ProgrammerWindow->resize(529, 357);
        verticalLayout_2 = new QVBoxLayout(ProgrammerWindow);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tasksListWidget = new QListWidget(ProgrammerWindow);
        tasksListWidget->setObjectName(QString::fromUtf8("tasksListWidget"));

        horizontalLayout_2->addWidget(tasksListWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(ProgrammerWindow);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        descriptionLineEdit = new QLineEdit(ProgrammerWindow);
        descriptionLineEdit->setObjectName(QString::fromUtf8("descriptionLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, descriptionLineEdit);

        label_2 = new QLabel(ProgrammerWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        idLineEdit = new QLineEdit(ProgrammerWindow);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, idLineEdit);

        addButton = new QPushButton(ProgrammerWindow);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, addButton);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        removeButton = new QPushButton(ProgrammerWindow);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        horizontalLayout->addWidget(removeButton);

        startTaskButton = new QPushButton(ProgrammerWindow);
        startTaskButton->setObjectName(QString::fromUtf8("startTaskButton"));

        horizontalLayout->addWidget(startTaskButton);

        finishTaskButton = new QPushButton(ProgrammerWindow);
        finishTaskButton->setObjectName(QString::fromUtf8("finishTaskButton"));

        horizontalLayout->addWidget(finishTaskButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        line = new QFrame(ProgrammerWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);


        verticalLayout_2->addLayout(horizontalLayout_2);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(descriptionLineEdit);
        label_2->setBuddy(idLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(ProgrammerWindow);

        QMetaObject::connectSlotsByName(ProgrammerWindow);
    } // setupUi

    void retranslateUi(QWidget *ProgrammerWindow)
    {
        ProgrammerWindow->setWindowTitle(QApplication::translate("ProgrammerWindow", "ProgrammerWindow", nullptr));
        label->setText(QApplication::translate("ProgrammerWindow", "Insert description:", nullptr));
        label_2->setText(QApplication::translate("ProgrammerWindow", "Insert id:", nullptr));
        addButton->setText(QApplication::translate("ProgrammerWindow", "Add Task", nullptr));
        removeButton->setText(QApplication::translate("ProgrammerWindow", "Remove Task", nullptr));
        startTaskButton->setText(QApplication::translate("ProgrammerWindow", "Start Task", nullptr));
        finishTaskButton->setText(QApplication::translate("ProgrammerWindow", "Finish  Task", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgrammerWindow: public Ui_ProgrammerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMMERWINDOW_H
