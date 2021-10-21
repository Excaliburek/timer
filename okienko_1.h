#ifndef OKIENKO1_H
#define OKIENKO1_H
#include "wykres.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class okienko1; }
QT_END_NAMESPACE

class okienko1 : public QMainWindow
{
    Q_OBJECT

public:
    okienko1(QWidget *parent = 0);
    ~okienko1();

private slots:
    void on_timeEdit_userTimeChanged(const QTime &time);

    void on_actionWykres_triggered();

private:
    Ui::okienko1 *ui;
    Wykres *wykres;


};
#endif // OKIENKO1_H
