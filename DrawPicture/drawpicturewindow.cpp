
#include "drawpicturewindow.h"
#include "ui_drawpicturewindow.h"

DrawPictureWindow::DrawPictureWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DrawPictureWindow)
{
    ui->setupUi(this);
    scene = new MouseScene;
    ui->graphicsView->setScene(scene);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),this,SLOT(sliderMoved()));
    ui->horizontalSlider->setRange(1,100);
}

DrawPictureWindow::~DrawPictureWindow()
{
    delete ui;
}

void DrawPictureWindow::SaveImage()
{
    QPixmap(ui->graphicsView->grab()).save(QFileDialog::getSaveFileName());
}

