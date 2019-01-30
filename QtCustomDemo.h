#ifndef QTCUSTOMDEMO_H
#define QTCUSTOMDEMO_H

#include <QtGui/QWidget>
#include "ui_QtCustomDemo.h"

class QtCustomDemo : public QWidget
{
	Q_OBJECT

public:
	QtCustomDemo(QWidget *parent = 0, Qt::WFlags flags = 0);
	~QtCustomDemo();

private:
	Ui::QtCustomDemoClass ui;
};

#endif // QTCUSTOMDEMO_H
