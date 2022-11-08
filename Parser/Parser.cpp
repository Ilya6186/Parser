#include "Parser.h"

#define repaint_time 5
#define EllipseRadius 20

Parser::Parser(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    connect(ui.pushButton, SIGNAL (clicked()), this, SLOT (ButOn()));
    connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(analiz()));
 

    //qApp->setStyleSheet("QLineEdit { background-color: yellow }");
    //qApp->setStyleSheet("QPushButton { background-color: green }");

    ui.progressBar->reset();

  //  connect(timer, SIGNAL(timeout()), this, SLOT(timeout()));


}


void Parser::ButOn()
{
    int test = 1;
    image->load(QFileDialog::getOpenFileName(0, "Directory Save", ""));

    if (image->isNull())
        return;

    qDebug() << "Read!";
    QSize imageSize = image->size();

    showImg = image->scaled(image->width() , image->height()); //уменьшиа размер в 2 раза перед выводом
    ui.graphicsView->setFixedWidth(showImg.width());
    ui.graphicsView->setFixedHeight(showImg.height());
    ui.graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui.graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    qDebug() << showImg.width();
    qDebug() << showImg.height();

    QGraphicsPixmapItem* pixItem = new QGraphicsPixmapItem(QPixmap::fromImage(showImg));
    scene->addItem(pixItem);// выводим
    ui.graphicsView->setScene(scene);
}
            

void Parser::analiz()
{
    if (image->isNull())
    { 
        QMessageBox mes;
        mes.setText("change image");
        mes.exec();
        return;
    }

    qreal x = 0, y = 0, w = EllipseRadius, h = EllipseRadius;  // рисуем эллипс
    El->setRect(x, y, w, h); // точки
    El->setBrush(QColor(255, 0, 0));
    QPointF pos = El->pos();

    connect(timer, SIGNAL(timeout()), this, SLOT(repaintEllipse()));
    timer->start(repaint_time);
}


void Parser::repaintEllipse()  // переделать, отвязать от таймера. смещение кружка после завершения расчётов. 
{                                  
    static double X = El->pos().x();
    static int Y = El->pos().y();
    QPointF newPos;
    QPointF oldPos = El->pos();
    static float speedElipse = 0;

     if (El->pos().x() < (image->width()) - 10)
     {
        newPos = QPointF(X += speedElipse/50, Y);
     }
     else {
        Y += 20;
        X = 0;
     }

     if (Y > (image->height()))
     {
         QMessageBox msgBox;
         msgBox.setText("Operation complete");
         msgBox.exec();
         timer->stop();
         ui.progressBar->reset();
         return;
     }

     ui.progressBar->setRange(0, 100);
     ui.progressBar->setValue(Y / 2 + X/10/4);

    //=====================// ниже рассчёт скорости

    El->setPos(newPos);
    scene->addItem(El);

    QRect RecEli;
    QImage CopiEl;
    RecEli = El->sceneBoundingRect().toRect();   // если использовать просто 
                                                 //BoundingRect то вернет квадрат относительно эллипса, нам нужно относительно сцены 
                                                 //sceneBoundingRect() вернёт координаты элипса в координатах сцены
    scene->addItem(El);
    CopiEl = showImg.copy(RecEli); // тут копируется часть изображения вокруг эллипса
    CopiEl = CopiEl.scaled(CopiEl.width(), CopiEl.height());

    for (int width = 0; width < CopiEl.width(); width++)
    {
        for (int height = 0; height < CopiEl.height(); height++)
        { 
            colorPixels->append(CopiEl.pixelColor(width, height));

        }
    }

    PixelColor round;
    speedElipse = round.roundValues(colorPixels);
    QString speed = QString::number(speedElipse);
    colorPixels->clear();
    ui.label->setText(speed);

    CopiEl = CopiEl.scaled(CopiEl.width() * 12, CopiEl.height() * 12);
    PixMapContactPoint->setPixmap(QPixmap::fromImage(CopiEl));

    sceneContactPoint->addItem(PixMapContactPoint);
    ui.graphicsView_2->setScene(sceneContactPoint); // тут вырезанная часть
    ui.graphicsView_2->setFixedSize(CopiEl.size());
    ui.graphicsView_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui.graphicsView_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

}

Parser::~Parser()
{}
