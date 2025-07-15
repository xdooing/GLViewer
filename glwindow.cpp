#include "glwindow.h"
#include <QHBoxLayout>

GLWindow::GLWindow(QWidget* parent) :
            QMainWindow(parent)
{
    setWindowTitle("GLViewer");
    resize(800, 600);

    QWidget* central = new QWidget(this);
    setCentralWidget(central);

    QHBoxLayout* layout = new QHBoxLayout(central);
    layout->setContentsMargins(0, 0, 0, 0);

    // 将GLView添加到布局
    gl_view_ = new GLView(central);
    layout->addWidget(gl_view_);
}