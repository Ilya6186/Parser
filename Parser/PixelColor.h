#pragma once
#include <QColor>
#include <QWidget>
#include <QtWidgets/QMainWindow>




class PixelColor : public QColor
{
public:
	PixelColor();
	PixelColor(QVector <QColor>*);

		~PixelColor();
		

private:

int koefSpeed(QColor);

public:
	
	int roundValues(QVector <QColor>*);
	//int round;
	
	signals:
		void getsp();
	

};

