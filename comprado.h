#ifndef COMPRADO_H
#define COMPRADO_H

#include <QDialog>

namespace Ui {
class Comprado;
}

class Comprado : public QDialog
{
    Q_OBJECT

public:
    explicit Comprado(QWidget *parent = 0);
    ~Comprado();

private:
    Ui::Comprado *ui;
};

#endif // COMPRADO_H
