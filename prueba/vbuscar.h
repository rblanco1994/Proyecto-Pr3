#ifndef VBUSCAR_H
#define VBUSCAR_H

#include <QMainWindow>
#include "dictnode.H"
#include <editor.h>

namespace Ui {
class vbuscar;
}

class vbuscar : public QMainWindow
{
    Q_OBJECT

public:
    explicit vbuscar(QWidget *parent = 0);
    ~vbuscar();
    void insertar_palabra(QString);

private:
    Ui::vbuscar *ui;
};

#endif // VBUSCAR_H
