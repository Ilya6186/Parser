#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Parser.h"
#include <QFileDialog>
#include <QtCore>
#include <QImage>
#include <QImageReader>
#include <qDebug>
#include <QVector> 
#include <QGraphicsScene>
#include <QPainter>
#include <QGraphicsEllipseItem>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QPainterPath>
#include "PixelColor.h"
#include "QMessageBox"
//#include <QTest> 
#include <QProgressBar>
#include <QUdpSocket> 


class Parser : public QMainWindow
{
    Q_OBJECT

public:
    Parser(QWidget *parent = nullptr);
    ~Parser();

signals:
    void start();

public slots:
  void analiz();

private slots:

  void ButOn();
  void repaintEllipse();

private:

    QUdpSocket* socket;
    QTimer* timer = new QTimer(this);
    QGraphicsScene* sceneContactPoint = new QGraphicsScene;
    QGraphicsPixmapItem* PixMapContactPoint = new QGraphicsPixmapItem;
    QVector <QColor>* colorPixels = new QVector <QColor>;
    QImage *CopiEl = new QImage;
    QImage showImg;
    QImage* image = new QImage;
    QGraphicsView* view = new QGraphicsView;
    QGraphicsEllipseItem* El = new QGraphicsEllipseItem;
    QGraphicsScene* scene = new QGraphicsScene;
  //  int x, y;
    

private:
    Ui::ParserClass ui;
};
