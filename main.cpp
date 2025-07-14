#include <QApplication>
#include <QMainWindow>
#include <QOpenGLWidget>
#include <QOpenGLFunctions_4_5_Core>


int main(int argc, char** argv) {
    QApplication app(argc, argv);
    QMainWindow win;
    win.show();
    return app.exec();
}