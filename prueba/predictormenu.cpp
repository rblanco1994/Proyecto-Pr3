#include "predictormenu.h"
#include "ui_predictormenu.h"

predictormenu::predictormenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::predictormenu)
{
    ui->setupUi(this);
}

predictormenu::~predictormenu()
{
    delete ui;
}

void predictormenu::on_editor_clicked()
{
    editor *edit = new editor(this);
    edit->show();
}
