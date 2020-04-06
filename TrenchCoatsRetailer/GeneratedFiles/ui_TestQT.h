/********************************************************************************
** Form generated from reading UI file 'TestQT.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTQT_H
#define UI_TESTQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestQTClass
{
public:
    QWidget *centralWidget;
    QListWidget *priceListWidget;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *allTrenchCoatsLabel;
    QLineEdit *filterTrenchCoatsLineEdit;
    QListWidget *allTrenchCoatsList;
    QFormLayout *formLayout;
    QLabel *sizeLabel;
    QLineEdit *sizeLineEdit;
    QLabel *colourLabel;
    QLineEdit *colourLineEdit;
    QLabel *quantityLabel;
    QLineEdit *quantityLineEdit;
    QLabel *priceLabel;
    QLineEdit *priceLineEdit;
    QLabel *photoLabel;
    QLineEdit *photoLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *addTrenchCoatButton;
    QPushButton *removeTrenchCoatButton;
    QPushButton *updateTrenchCoatButton;
    QVBoxLayout *verticalLayout;
    QLabel *shoppingBagLabel;
    QListWidget *shoppingBagList;
    QHBoxLayout *horizontalLayout;
    QPushButton *addToBagButton;
    QPushButton *nextButton;
    QPushButton *buyButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestQTClass)
    {
        if (TestQTClass->objectName().isEmpty())
            TestQTClass->setObjectName(QString::fromUtf8("TestQTClass"));
        TestQTClass->resize(589, 397);
        centralWidget = new QWidget(TestQTClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        priceListWidget = new QListWidget(centralWidget);
        priceListWidget->setObjectName(QString::fromUtf8("priceListWidget"));
        priceListWidget->setGeometry(QRect(410, 320, 121, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(326, 320, 61, 20));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 524, 301));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        allTrenchCoatsLabel = new QLabel(widget);
        allTrenchCoatsLabel->setObjectName(QString::fromUtf8("allTrenchCoatsLabel"));

        verticalLayout_7->addWidget(allTrenchCoatsLabel);

        filterTrenchCoatsLineEdit = new QLineEdit(widget);
        filterTrenchCoatsLineEdit->setObjectName(QString::fromUtf8("filterTrenchCoatsLineEdit"));

        verticalLayout_7->addWidget(filterTrenchCoatsLineEdit);

        allTrenchCoatsList = new QListWidget(widget);
        allTrenchCoatsList->setObjectName(QString::fromUtf8("allTrenchCoatsList"));

        verticalLayout_7->addWidget(allTrenchCoatsList);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        sizeLabel = new QLabel(widget);
        sizeLabel->setObjectName(QString::fromUtf8("sizeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, sizeLabel);

        sizeLineEdit = new QLineEdit(widget);
        sizeLineEdit->setObjectName(QString::fromUtf8("sizeLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, sizeLineEdit);

        colourLabel = new QLabel(widget);
        colourLabel->setObjectName(QString::fromUtf8("colourLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, colourLabel);

        colourLineEdit = new QLineEdit(widget);
        colourLineEdit->setObjectName(QString::fromUtf8("colourLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, colourLineEdit);

        quantityLabel = new QLabel(widget);
        quantityLabel->setObjectName(QString::fromUtf8("quantityLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, quantityLabel);

        quantityLineEdit = new QLineEdit(widget);
        quantityLineEdit->setObjectName(QString::fromUtf8("quantityLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, quantityLineEdit);

        priceLabel = new QLabel(widget);
        priceLabel->setObjectName(QString::fromUtf8("priceLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, priceLabel);

        priceLineEdit = new QLineEdit(widget);
        priceLineEdit->setObjectName(QString::fromUtf8("priceLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, priceLineEdit);

        photoLabel = new QLabel(widget);
        photoLabel->setObjectName(QString::fromUtf8("photoLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, photoLabel);

        photoLineEdit = new QLineEdit(widget);
        photoLineEdit->setObjectName(QString::fromUtf8("photoLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, photoLineEdit);


        verticalLayout_7->addLayout(formLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        addTrenchCoatButton = new QPushButton(widget);
        addTrenchCoatButton->setObjectName(QString::fromUtf8("addTrenchCoatButton"));

        horizontalLayout_6->addWidget(addTrenchCoatButton);

        removeTrenchCoatButton = new QPushButton(widget);
        removeTrenchCoatButton->setObjectName(QString::fromUtf8("removeTrenchCoatButton"));

        horizontalLayout_6->addWidget(removeTrenchCoatButton);

        updateTrenchCoatButton = new QPushButton(widget);
        updateTrenchCoatButton->setObjectName(QString::fromUtf8("updateTrenchCoatButton"));

        horizontalLayout_6->addWidget(updateTrenchCoatButton);


        verticalLayout_7->addLayout(horizontalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        shoppingBagLabel = new QLabel(widget);
        shoppingBagLabel->setObjectName(QString::fromUtf8("shoppingBagLabel"));

        verticalLayout->addWidget(shoppingBagLabel);

        shoppingBagList = new QListWidget(widget);
        shoppingBagList->setObjectName(QString::fromUtf8("shoppingBagList"));

        verticalLayout->addWidget(shoppingBagList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addToBagButton = new QPushButton(widget);
        addToBagButton->setObjectName(QString::fromUtf8("addToBagButton"));

        horizontalLayout->addWidget(addToBagButton);

        nextButton = new QPushButton(widget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        horizontalLayout->addWidget(nextButton);

        buyButton = new QPushButton(widget);
        buyButton->setObjectName(QString::fromUtf8("buyButton"));

        horizontalLayout->addWidget(buyButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        TestQTClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TestQTClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 589, 21));
        TestQTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestQTClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TestQTClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestQTClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TestQTClass->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        sizeLabel->setBuddy(sizeLineEdit);
        colourLabel->setBuddy(colourLineEdit);
        quantityLabel->setBuddy(quantityLineEdit);
        priceLabel->setBuddy(priceLineEdit);
        photoLabel->setBuddy(photoLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(TestQTClass);

        QMetaObject::connectSlotsByName(TestQTClass);
    } // setupUi

    void retranslateUi(QMainWindow *TestQTClass)
    {
        TestQTClass->setWindowTitle(QApplication::translate("TestQTClass", "TestQT", nullptr));
        label->setText(QApplication::translate("TestQTClass", "Total price:", nullptr));
        allTrenchCoatsLabel->setText(QApplication::translate("TestQTClass", "All trench coats:", nullptr));
        filterTrenchCoatsLineEdit->setPlaceholderText(QApplication::translate("TestQTClass", "Filter:", nullptr));
        sizeLabel->setText(QApplication::translate("TestQTClass", "Size:", nullptr));
        colourLabel->setText(QApplication::translate("TestQTClass", "Colour:", nullptr));
        quantityLabel->setText(QApplication::translate("TestQTClass", "Quantity:", nullptr));
        priceLabel->setText(QApplication::translate("TestQTClass", "Price:", nullptr));
        photoLabel->setText(QApplication::translate("TestQTClass", "Photo:", nullptr));
        addTrenchCoatButton->setText(QApplication::translate("TestQTClass", "Add", nullptr));
        removeTrenchCoatButton->setText(QApplication::translate("TestQTClass", "Remove", nullptr));
        updateTrenchCoatButton->setText(QApplication::translate("TestQTClass", "Update", nullptr));
        shoppingBagLabel->setText(QApplication::translate("TestQTClass", "Shopping Bag:", nullptr));
        addToBagButton->setText(QApplication::translate("TestQTClass", "Add to Bag", nullptr));
        nextButton->setText(QApplication::translate("TestQTClass", "Next", nullptr));
        buyButton->setText(QApplication::translate("TestQTClass", "Buy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestQTClass: public Ui_TestQTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTQT_H
