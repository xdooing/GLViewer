#include <QApplication>
#include <QMainWindow>
#include "glwindow.h"

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    GLWindow win;
    win.show();
    return app.exec();
}