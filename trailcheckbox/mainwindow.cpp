#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Bold,SIGNAL(clicked(bool)),this,SLOT(Bold_clicked()));
    connect(ui->Italic,SIGNAL(clicked(bool)),this,SLOT(Italic_clicked()));
    connect(ui->radioButton,SIGNAL(clicked(bool)),this,SLOT(radioButtion_clicked()));
    connect(ui->radioButton_2,SIGNAL(clicked(bool)),this,SLOT(radioButtion_2_clicked()));
    connect(ui->radioButton_3,SIGNAL(clicked(bool)),this,SLOT(radioButtion_3_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Bold_clicked()
{
    QTextStream stream(stdout);
        if(ui->Bold->isChecked())
        {
            stream<<"Bold Is Checked"<<endl;
            ui->label->setStyleSheet("color: red; font-weight: bold ");
        }
        else
        {
            stream<<"Bold Is Unchecked"<<endl;
            ui->label->setStyleSheet("QLabel");
        }
}

void MainWindow::on_Italic_clicked()
{
    QTextStream stream(stdout);
        if(ui->Bold->isChecked())
        {
            stream<<"Italic Is Checked"<<endl;
            ui->label->setStyleSheet("color: green; font-weight: italic ");
        }
        else
        {
            stream<<"Italic Is Unchecked"<<endl;
            ui->label->setStyleSheet("QLabel");
        }
}

void MainWindow::on_radioButton_clicked()
{
    QTextStream stream(stdout);
        if(ui->radioButton->isChecked())
        {
            stream<<"Left Is Checked"<<endl;
             ui->label->setStyleSheet("color: orange");
        }
}

void MainWindow::on_radioButton_2_clicked()
{
    QTextStream stream(stdout);
        if(ui->radioButton_2->isChecked())
        {
            stream<<"Center Is Checked"<<endl;
             ui->label->setStyleSheet("color: pink");
        }
}


void MainWindow::on_radioButton_3_clicked()
{
    QTextStream stream(stdout);
        if(ui->radioButton_3->isChecked())
        {
            stream<<"Right Is Checked"<<endl;
             ui->label->setStyleSheet("color: maroon");
        }
}
