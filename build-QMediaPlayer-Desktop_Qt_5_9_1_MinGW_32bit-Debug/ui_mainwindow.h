/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_File;
    QWidget *centralWidget;
    QLabel *lbl_Title_File_Name;
    QLabel *lbl_Value_File_Name;
    QPushButton *pushButton_Play;
    QPushButton *pushButton_Pause;
    QSlider *horizontalSlider_Volume_Control;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QMenu *menuOpen;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(612, 275);
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QStringLiteral("actionOpen_File"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lbl_Title_File_Name = new QLabel(centralWidget);
        lbl_Title_File_Name->setObjectName(QStringLiteral("lbl_Title_File_Name"));
        lbl_Title_File_Name->setGeometry(QRect(10, 10, 181, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lbl_Title_File_Name->setFont(font);
        lbl_Value_File_Name = new QLabel(centralWidget);
        lbl_Value_File_Name->setObjectName(QStringLiteral("lbl_Value_File_Name"));
        lbl_Value_File_Name->setGeometry(QRect(190, 10, 411, 41));
        lbl_Value_File_Name->setFont(font);
        pushButton_Play = new QPushButton(centralWidget);
        pushButton_Play->setObjectName(QStringLiteral("pushButton_Play"));
        pushButton_Play->setGeometry(QRect(10, 60, 91, 61));
        pushButton_Pause = new QPushButton(centralWidget);
        pushButton_Pause->setObjectName(QStringLiteral("pushButton_Pause"));
        pushButton_Pause->setGeometry(QRect(110, 60, 91, 61));
        horizontalSlider_Volume_Control = new QSlider(centralWidget);
        horizontalSlider_Volume_Control->setObjectName(QStringLiteral("horizontalSlider_Volume_Control"));
        horizontalSlider_Volume_Control->setGeometry(QRect(210, 80, 411, 21));
        horizontalSlider_Volume_Control->setMinimum(1);
        horizontalSlider_Volume_Control->setMaximum(100);
        horizontalSlider_Volume_Control->setValue(10);
        horizontalSlider_Volume_Control->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 612, 23));
        menuOpen = new QMenu(menuBar);
        menuOpen->setObjectName(QStringLiteral("menuOpen"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuOpen->menuAction());
        menuOpen->addAction(actionOpen_File);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionOpen_File->setText(QApplication::translate("MainWindow", "Open File", Q_NULLPTR));
        lbl_Title_File_Name->setText(QApplication::translate("MainWindow", "Audio File Name:", Q_NULLPTR));
        lbl_Value_File_Name->setText(QApplication::translate("MainWindow", "File Name:", Q_NULLPTR));
        pushButton_Play->setText(QString());
        pushButton_Pause->setText(QString());
        menuOpen->setTitle(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
