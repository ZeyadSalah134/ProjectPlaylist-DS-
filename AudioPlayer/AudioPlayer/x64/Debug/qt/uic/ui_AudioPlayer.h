/********************************************************************************
** Form generated from reading UI file 'AudioPlayer.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOPLAYER_H
#define UI_AUDIOPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioPlayerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AudioPlayerClass)
    {
        if (AudioPlayerClass->objectName().isEmpty())
            AudioPlayerClass->setObjectName("AudioPlayerClass");
        AudioPlayerClass->resize(600, 400);
        menuBar = new QMenuBar(AudioPlayerClass);
        menuBar->setObjectName("menuBar");
        AudioPlayerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AudioPlayerClass);
        mainToolBar->setObjectName("mainToolBar");
        AudioPlayerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(AudioPlayerClass);
        centralWidget->setObjectName("centralWidget");
        AudioPlayerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AudioPlayerClass);
        statusBar->setObjectName("statusBar");
        AudioPlayerClass->setStatusBar(statusBar);

        retranslateUi(AudioPlayerClass);

        QMetaObject::connectSlotsByName(AudioPlayerClass);
    } // setupUi

    void retranslateUi(QMainWindow *AudioPlayerClass)
    {
        AudioPlayerClass->setWindowTitle(QCoreApplication::translate("AudioPlayerClass", "AudioPlayer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AudioPlayerClass: public Ui_AudioPlayerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOPLAYER_H
