#ifndef PREDICTORMENU_H
#define PREDICTORMENU_H

#include <QDialog>
#include<editor.h>

namespace Ui {
class predictormenu;
}

class predictormenu : public QDialog
{
    Q_OBJECT

public:
    explicit predictormenu(QWidget *parent = 0);
    ~predictormenu();

private slots:
    void on_editor_clicked();

private:
    Ui::predictormenu *ui;
};

#endif // PREDICTORMENU_H
