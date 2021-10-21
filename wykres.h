#ifndef WYKRES_H
#define WYKRES_H

#include <QDialog>

namespace Ui {
class Wykres;
}

class Wykres : public QDialog
{
    Q_OBJECT

public:
    explicit Wykres(QWidget *parent = nullptr);
    ~Wykres();

private:
    Ui::Wykres *ui;
};

#endif // WYKRES_H
