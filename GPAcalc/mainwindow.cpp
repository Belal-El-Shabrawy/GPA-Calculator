#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(568, 432);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    double A1,A2,A3,B1,B2,B3,C1,C2,C3,D1,D2,D3,a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3;
    A1 = ui->spinBox->value(),A2 = ui->spinBox_2->value(),A3 = ui->spinBox_3->value();
    B1 = ui->spinBox_4->value(),B2 = ui->spinBox_5->value(),B3 = ui->spinBox_6->value();
    C1 = ui->spinBox_7->value(),C2 = ui->spinBox_8->value(),C3 = ui->spinBox_9->value();
    D1 = ui->spinBox_10->value(),D2 = ui->spinBox_11->value(),D3 = ui->spinBox_12->value();
    a1 = ui->spinBox_13->value(),a2 = ui->spinBox_14->value(),a3 = ui->spinBox_15->value();
    b1 = ui->spinBox_16->value(),b2 = ui->spinBox_17->value(),b3 = ui->spinBox_18->value();
    c1 = ui->spinBox_19->value(),c2 = ui->spinBox_20->value(),c3 = ui->spinBox_21->value();
    d1 = ui->spinBox_22->value(),d2 = ui->spinBox_23->value(),d3 = ui->spinBox_24->value();
    double sum,GPA;
    sum = (3*((A1*4) + (A2*3.7) + (A3*3.4) + (B1*3.2) + (B2*3.0) + (B3*2.8) + (C1*2.6) + (C2*2.4) + (C3*2.2) + (D1*2.0) + (D2*1.5) + (D3*1)) + 2*((a1*4) + (a2*3.7) + (a3*3.4) + (b1*3.2) + (b2*3.0) + (b3*2.8) + (c1*2.6) + (c2*2.4) + (c3*2.2) + (d1*2.0) + (d2*1.5) + (d3*1)))/(3*(A1+A2+A3+B1+B2+B3+C1+C2+C3+D1+D2+D3) + 2*(a1+a2+a3+b1+b2+b3+c1+c2+c3+d1+d2+d3));
    QString formattedValue = QString::number(sum, 'f', 2);
    GPA = formattedValue.toDouble();
    ui->lcdNumber->display(GPA);

}

