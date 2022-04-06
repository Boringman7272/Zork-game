#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Command.h"
#include "Parser.h"
#include "Room.h"
#include "item.h"
#include <iostream>
#include <string>
#include "ZorkUL.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_textEdit_textChanged();

    void on_textEdit_2_copyAvailable(bool b);

    void on_pushButton_9_clicked();

    void on_pushButton_2_released();

    void on_pushButton_4_released();

    void on_pushButton_3_released();

    void on_pushButton_5_released();

    void on_pushButton_6_released();

    void on_pushButton_10_clicked();

    void on_ClearButton_clicked();

    void on_Description_clicked();

    void on_west_clicked();

    void on_North_clicked();

    void on_Search_clicked();

    void on_South_clicked();

    void on_East_clicked();

    void on_GoldTooltip_clicked();

    void on_Use_clicked();

    void on_Item_clicked();

    void on_LOOT_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
