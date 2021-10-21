#include "okienko_1.h"
#include "ui_okienko1.h"


okienko1::okienko1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::okienko1)
{
    ui->setupUi(this);
}

okienko1::~okienko1()
{
    delete ui;
}


void okienko1::on_timeEdit_userTimeChanged(const QTime &time)
{

}


void okienko1::on_actionWykres_triggered()
{
    wykres = new Wykres(this);
    wykres->show();



}

