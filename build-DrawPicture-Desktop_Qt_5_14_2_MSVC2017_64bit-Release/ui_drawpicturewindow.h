/********************************************************************************
** Form generated from reading UI file 'drawpicturewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWPICTUREWINDOW_H
#define UI_DRAWPICTUREWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrawPictureWindow
{
public:
    QAction *actionSave_Image;
    QAction *actionQuit;
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QSlider *horizontalSlider;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DrawPictureWindow)
    {
        if (DrawPictureWindow->objectName().isEmpty())
            DrawPictureWindow->setObjectName(QString::fromUtf8("DrawPictureWindow"));
        DrawPictureWindow->resize(1307, 749);
        actionSave_Image = new QAction(DrawPictureWindow);
        actionSave_Image->setObjectName(QString::fromUtf8("actionSave_Image"));
        actionQuit = new QAction(DrawPictureWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralwidget = new QWidget(DrawPictureWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(9, 9, 791, 691));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(910, 40, 351, 21));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(870, 40, 31, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(870, 90, 31, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(940, 90, 75, 23));
        DrawPictureWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DrawPictureWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1307, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        DrawPictureWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DrawPictureWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DrawPictureWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave_Image);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(DrawPictureWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), DrawPictureWindow, SLOT(close()));
        QObject::connect(actionSave_Image, SIGNAL(triggered()), DrawPictureWindow, SLOT(SaveImage()));

        QMetaObject::connectSlotsByName(DrawPictureWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DrawPictureWindow)
    {
        DrawPictureWindow->setWindowTitle(QCoreApplication::translate("DrawPictureWindow", "DrawPictureWindow", nullptr));
        actionSave_Image->setText(QCoreApplication::translate("DrawPictureWindow", "Save Image", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_Image->setShortcut(QCoreApplication::translate("DrawPictureWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("DrawPictureWindow", "Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("DrawPictureWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("DrawPictureWindow", "Pen", nullptr));
        label_2->setText(QCoreApplication::translate("DrawPictureWindow", "Select", nullptr));
        pushButton->setText(QCoreApplication::translate("DrawPictureWindow", "PushButton", nullptr));
        menuFile->setTitle(QCoreApplication::translate("DrawPictureWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DrawPictureWindow: public Ui_DrawPictureWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWPICTUREWINDOW_H
