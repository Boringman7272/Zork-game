#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include <iostream>
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //2.cin

    ui->textEdit->append("hehe");
}




void MainWindow::on_ClearButton_clicked()
{

}


void MainWindow::on_Description_clicked()
{
 ui->textEdit->append("hehe");
}


void MainWindow::on_west_clicked()
{

}


void MainWindow::on_North_clicked()
{

}


void MainWindow::on_Search_clicked()
{

}


void MainWindow::on_South_clicked()
{

}


void MainWindow::on_East_clicked()
{

}


void MainWindow::on_GoldTooltip_clicked()
{

}


void MainWindow::on_Use_clicked()
{

}


void MainWindow::on_Item_clicked()
{

}


void MainWindow::on_LOOT_clicked()
{

}

