#include "../include/qopengl.h"
#include <QApplication>

#include <QSurfaceFormat>

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);


    QSurfaceFormat fmt;
    fmt.setDepthBufferSize(24);
    //if (parser.isSet(multipleSampleOption))
        fmt.setSamples(4);
    //if (parser.isSet(coreProfileOption)) {
        fmt.setVersion(3, 3);
        fmt.setProfile(QSurfaceFormat::CoreProfile);
    //}
    QSurfaceFormat::setDefaultFormat(fmt);


	QOpenGL w;
	w.show();
	return a.exec();
}
