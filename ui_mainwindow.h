/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stkSerialNo;
    QWidget *page;
    QHBoxLayout *horizontalLayout;
    QLabel *lblSerialNo;
    QLineEdit *edtSerialNo;
    QWidget *page_2;
    QGroupBox *grpExpiry;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rdoNoLimit;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *rdoLimit;
    QLineEdit *edtLimit;
    QLabel *lblLimitUnit;
    QSpacerItem *horizontalSpacer_2;
    QStackedWidget *stkKey;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblKey;
    QLineEdit *edtKey;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnGenerate;
    QPushButton *btnQuit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(321, 266);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stkSerialNo = new QStackedWidget(centralWidget);
        stkSerialNo->setObjectName(QString::fromUtf8("stkSerialNo"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout = new QHBoxLayout(page);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lblSerialNo = new QLabel(page);
        lblSerialNo->setObjectName(QString::fromUtf8("lblSerialNo"));

        horizontalLayout->addWidget(lblSerialNo);

        edtSerialNo = new QLineEdit(page);
        edtSerialNo->setObjectName(QString::fromUtf8("edtSerialNo"));

        horizontalLayout->addWidget(edtSerialNo);

        stkSerialNo->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stkSerialNo->addWidget(page_2);

        verticalLayout->addWidget(stkSerialNo);

        grpExpiry = new QGroupBox(centralWidget);
        grpExpiry->setObjectName(QString::fromUtf8("grpExpiry"));
        verticalLayout_2 = new QVBoxLayout(grpExpiry);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        rdoNoLimit = new QRadioButton(grpExpiry);
        rdoNoLimit->setObjectName(QString::fromUtf8("rdoNoLimit"));

        verticalLayout_2->addWidget(rdoNoLimit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        rdoLimit = new QRadioButton(grpExpiry);
        rdoLimit->setObjectName(QString::fromUtf8("rdoLimit"));

        horizontalLayout_4->addWidget(rdoLimit);

        edtLimit = new QLineEdit(grpExpiry);
        edtLimit->setObjectName(QString::fromUtf8("edtLimit"));

        horizontalLayout_4->addWidget(edtLimit);

        lblLimitUnit = new QLabel(grpExpiry);
        lblLimitUnit->setObjectName(QString::fromUtf8("lblLimitUnit"));

        horizontalLayout_4->addWidget(lblLimitUnit);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(grpExpiry);

        stkKey = new QStackedWidget(centralWidget);
        stkKey->setObjectName(QString::fromUtf8("stkKey"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        horizontalLayout_2 = new QHBoxLayout(page_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblKey = new QLabel(page_3);
        lblKey->setObjectName(QString::fromUtf8("lblKey"));

        horizontalLayout_2->addWidget(lblKey);

        edtKey = new QLineEdit(page_3);
        edtKey->setObjectName(QString::fromUtf8("edtKey"));

        horizontalLayout_2->addWidget(edtKey);

        stkKey->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stkKey->addWidget(page_4);

        verticalLayout->addWidget(stkKey);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnGenerate = new QPushButton(centralWidget);
        btnGenerate->setObjectName(QString::fromUtf8("btnGenerate"));

        horizontalLayout_3->addWidget(btnGenerate);

        btnQuit = new QPushButton(centralWidget);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));

        horizontalLayout_3->addWidget(btnQuit);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 321, 18));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Key Generate Tool", 0, QApplication::UnicodeUTF8));
        lblSerialNo->setText(QApplication::translate("MainWindow", "Serial No.", 0, QApplication::UnicodeUTF8));
        grpExpiry->setTitle(QApplication::translate("MainWindow", "Expiry", 0, QApplication::UnicodeUTF8));
        rdoNoLimit->setText(QApplication::translate("MainWindow", "No Limit", 0, QApplication::UnicodeUTF8));
        rdoLimit->setText(QApplication::translate("MainWindow", "Limit", 0, QApplication::UnicodeUTF8));
        lblLimitUnit->setText(QApplication::translate("MainWindow", "days", 0, QApplication::UnicodeUTF8));
        lblKey->setText(QApplication::translate("MainWindow", "Activie Code", 0, QApplication::UnicodeUTF8));
        btnGenerate->setText(QApplication::translate("MainWindow", "Generate", 0, QApplication::UnicodeUTF8));
        btnQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
