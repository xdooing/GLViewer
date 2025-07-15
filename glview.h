#ifndef GLVIEW_H_
#define GLVIEW_H_

#include <QOpenGLWidget>
#include <QOpenGLFunctions_4_5_Core>

class GLView : public QOpenGLWidget, QOpenGLFunctions_4_5_Core {
    Q_OBJECT
public:
    explicit GLView(QWidget* parent = nullptr);

protected:
    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();

public Q_SLOTS: /*same as 'public slots'*/

};
#endif