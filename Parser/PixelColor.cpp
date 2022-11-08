#include "PixelColor.h"

PixelColor::PixelColor()
{

}
PixelColor::PixelColor(QVector <QColor> *pixels)
{
    //P = this;

    roundValues(pixels);
}

PixelColor::~PixelColor()
{

}

int PixelColor::roundValues(QVector <QColor>* pixels)
{
    int round = 0;
    for (int i = 0; i < pixels->size(); i++)
    {
       int ro = koefSpeed(pixels->at(i));
       round = round + ro;
    }
    round = round / pixels->size();
    return round;
}

int PixelColor::koefSpeed(QColor Color)
{
    QColor hsv = Color.toHsv();
    int ang = hsv.hue();
    int sat = hsv.hsvSaturation();
    int val = hsv.value();
    int speed = 10;

    if (sat > 75 && val > 75)
    {
        if (ang > 0 && ang < 20)
            speed = -9;
        if (ang >= 20 && ang < 40)
            speed = -8;
        if (ang >= 40 && ang < 60)
            speed = -7;
        if (ang >= 60 && ang < 80)
            speed = -6;
        if (ang >= 80 && ang < 100)
            speed = -5;
        if (ang >= 100 && ang < 120)
            speed = -4;
        if (ang >= 120 && ang < 140)
            speed = -3;
        if (ang >= 140 && ang < 160)
            speed = -2;
        if (ang >= 160 && ang < 180)
            speed = -1;
        if (ang >= 180 && ang < 200)
            speed = 0;
        if (ang >= 200 && ang < 220)
            speed = 1;
        if (ang >= 220 && ang < 240)
            speed = 2;
        if (ang >= 240 && ang < 260)
            speed = 3;
        if (ang >= 260 && ang < 280)
            speed = 4;
        if (ang >= 280 && ang < 300)
            speed = 5;
        /*  if (ang >= 300 && ang < 320)
            speed;
        if (ang >= 320 && ang < 340)
            speed;
        if (ang >= 340 && ang < 360)
            speed;*/

    }

    if (speed < 0)
        speed = 1;
    if (speed > 20)
        speed = 10;

    return speed;
}
