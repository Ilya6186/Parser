/********************************************************************************
** Form generated from reading UI file 'Parser.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARSER_H
#define UI_PARSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParserClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ParserClass)
    {
        if (ParserClass->objectName().isEmpty())
            ParserClass->setObjectName(QStringLiteral("ParserClass"));
        ParserClass->resize(673, 461);
        centralWidget = new QWidget(ParserClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 170, 151, 41));
        ParserClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ParserClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 673, 21));
        ParserClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ParserClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ParserClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ParserClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ParserClass->setStatusBar(statusBar);

        retranslateUi(ParserClass);

        QMetaObject::connectSlotsByName(ParserClass);
    } // setupUi

    void retranslateUi(QMainWindow *ParserClass)
    {
        ParserClass->setWindowTitle(QApplication::translate("ParserClass", "Parser", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ParserClass", "\320\262\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\276\321\202\320\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ParserClass: public Ui_ParserClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARSER_H
