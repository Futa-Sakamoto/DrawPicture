
#include "drawpicturewindow.h"
#include "ui_drawpicturewindow.h"

DrawPictureWindow::DrawPictureWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DrawPictureWindow)
{
    ui->setupUi(this);
    scene = new MouseScene;
    ui->graphicsView->setScene(scene);  //キャンバスに線を引けるようにする。
    ui->horizontalSlider->setRange(1,100);

    setAcceptDrops(true);
}

DrawPictureWindow::~DrawPictureWindow()
{
    delete ui;
}

void DrawPictureWindow::SaveImage()
{
    QPixmap(ui->graphicsView->grab()).save(QFileDialog::getSaveFileName());
}


void DrawPictureWindow::on_horizontalSlider_valueChanged(int value)
{
    QPen oQpen;

    // 現在のペンを取得
    oQpen = scene -> GetPen();

    // ペンの太さ変更
    oQpen.setWidth(value);
    scene -> SetPen(oQpen);
}

void DrawPictureWindow::on_pushButton_released()
{
    bool bSelectOn = scene -> GetSelectOn();

    if (bSelectOn == true) {
        bSelectOn = false;
    } else {
        bSelectOn = true;
    }
    scene -> SetSelectOn(bSelectOn);
}
