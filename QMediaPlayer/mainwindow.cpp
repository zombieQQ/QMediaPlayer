#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    M_Player = new QMediaPlayer();

    ui->pushButton_Play->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    //初始化音量控制滑块的音量值
    M_Player->setVolume(ui->horizontalSlider_Volume_Control->value());
}

//当用户触发打开文件动作时，这个函数会被调用。
//使用QFileDialog弹出一个对话框让用户选择一个MP3文件。
//将选中的文件设置为媒体播放器的媒体源。
//显示选中文件的名称在界面上。
void MainWindow::on_actionOpen_File_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this,tr("Select Audio File"),"",tr("MP3 Files (*.MP3)"));
    M_Player->setMedia(QUrl(FileName));

    QFileInfo File(FileName);


    ui->lbl_Value_File_Name->setText(File.fileName());
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Play_clicked()
{
    M_Player->play();
}

void MainWindow::on_pushButton_Pause_clicked()
{
    M_Player->pause();
    //M_Player->stop();
}

//这个函数响应音量控制滑块的变化，根据滑块的值调整媒体播放器的音量。
void MainWindow::on_horizontalSlider_Volume_Control_valueChanged(int value)
{
    M_Player->setVolume(value);
}

