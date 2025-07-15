#ifndef GLWINDOW_H_
#define GLWINDOW_H_

#include <QMainWindow>
#include "glview.h"

class GLWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit GLWindow(QWidget* parent = nullptr);


private:
    GLView* gl_view_;
};



#endif