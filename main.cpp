#include "QtCustomDemo.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtCustomDemo w;
	w.show();
	return a.exec();
}
