#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia>
#include<QFileDialog>
#include<QStyle>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:


    void on_pushButton_Play_clicked();

    void on_pushButton_Pause_clicked();

    void on_horizontalSlider_Volume_Control_valueChanged(int value);

    void on_actionOpen_File_triggered();

private:
    Ui::MainWindow *ui;
//    类的私有成员。ui 是一个指向用户界面的指针，
//    M_Player 是一个指向媒体播放器对象的指针，用于控制音频或视频文件的播放。
    QMediaPlayer *M_Player;

};

#endif // MAINWINDOW_H
