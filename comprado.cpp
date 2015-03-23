#include "comprado.h"
#include "ui_comprado.h"

Comprado::Comprado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Comprado)
{
    ui->setupUi(this);
}

Comprado::~Comprado()
{
    delete ui;
}
