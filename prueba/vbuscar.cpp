#include "vbuscar.h"
#include "ui_vbuscar.h"
#include "dictnode.H"

vbuscar::vbuscar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::vbuscar)
{
    ui->setupUi(this);

}

vbuscar::~vbuscar()
{
    delete ui;
}

void vbuscar::insertar_palabra(QString a)
{
    ui->textEdit->setPlainText(a);
}
