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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParserClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ParserClass)
    {
        if (ParserClass->objectName().isEmpty())
            ParserClass->setObjectName(QStringLiteral("ParserClass"));
        ParserClass->resize(982, 455);
        centralWidget = new QWidget(ParserClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        horizontalLayout->addWidget(graphicsView);

        graphicsView_2 = new QGraphicsView(centralWidget);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));

        horizontalLayout->addWidget(graphicsView_2);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setCheckable(true);

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        gridLayout_2->addWidget(progressBar, 3, 0, 1, 1);

        ParserClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ParserClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 982, 21));
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
        label_3->setText(QApplication::translate("ParserClass", "\320\237\321\217\321\202\320\275\320\276 \320\272\320\276\320\275\321\202\320\260\320\272\321\202\320\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("ParserClass", "\321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214:", Q_NULLPTR));
        label->setText(QApplication::translate("ParserClass", "TextLabel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ParserClass", "\320\241\321\202\320\260\321\200\321\202 \320\260\320\275\320\260\320\273\320\270\320\267\320\262\320\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ParserClass", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ParserClass: public Ui_ParserClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARSER_H
