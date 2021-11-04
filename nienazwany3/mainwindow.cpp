#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ms = 0;
    s = 0;
    m = 0;
    timer = new QTimer(this);
    connect (timer, SIGNAL(timeout()), this, SLOT(TimerSlot()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::TimerSlot()
{

    ms++;
    if(ms >= 1000)
    {
        ms = 0;
        s++;
    }
     if(s >= 60)
    {
        s = 0;
        m++;
    }
     ui->label->setText(QString::number(m) + " : " + QString::number(s) + " : " + QString::number(ms));
}

int licznik;
void MainWindow::on_pushButton_clicked()

{
    flag = !flag;;
    if(flag)
    {
        ui->pushButton->setText("start");
        timer->stop();
    }
    else
    {
        ui->pushButton->setText("stop");
        timer->start(1);
        ms = 0;
        s = 0;
        m = 0;
    }
    {
QFile file("D:/bakup/nienazwany3/czasy.txt");
       licznik+=1;
if (!file.open(QFile::Append | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not open");
    }
        if(licznik%2==0)
        {
            QTextStream out(&file);
            QString text = ui->label->text();
            out << text << '\n';
            file.flush();
            file.close();
        }
    }
    //tutaj czytanie

    QFile plik("D:/bakup/nienazwany3/czasy.txt");
    if (!plik.open(QFile::readOnly | QFile::Text))
    {

       QMessageBox::warning(this,"sss","sss");
    }
    QTextStream in(&plik);
    QString tekst = in.readLine(50);
    ui->label_2->setText(tekst);



    }




