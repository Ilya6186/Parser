#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Parser.h"
#include "QFileDialog"
#include "QtCore"


class Parser : public QMainWindow
{
    Q_OBJECT

public:
    Parser(QWidget *parent = nullptr);
    ~Parser();

private slots:

   void ButOn();

private:
    Ui::ParserClass ui;
};
