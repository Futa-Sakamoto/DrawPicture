#ifndef DRAWPICTUREWINDOW_H
#define DRAWPICTUREWINDOW_H

#include <QMainWindow>
#include <QFileDialog>

#include "mousescene.h"

QT_BEGIN_NAMESPACE
namespace Ui { class DrawPictureWindow; }
QT_END_NAMESPACE

class DrawPictureWindow : public QMainWindow
{
    Q_OBJECT

public:
    DrawPictureWindow(QWidget *parent = nullptr);
    ~DrawPictureWindow();

private slots:
    void SaveImage();

private:
    Ui::DrawPictureWindow *ui;
    MouseScene *scene;
};
#endif // DRAWPICTUREWINDOW_H
