#include "editor.h"
#include "ui_editor.h"
#include "dictnode.H"

editor::editor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::editor)
{
    ui->setupUi(this);


    //this->setCentralWidget(ui->textEdit);
}

editor::~editor()
{
    delete ui;
}

void editor::on_actionNuevo_triggered()
{
    Cnode *node = new Cnode('a');
    nodo->insert_child(node);
    //std::string aux;
    Cnode *aux = nodo->search_child('a');
    std::string aux2;
    aux2 = (aux->symbol());
    texto = QString::fromStdString(aux2);
    ui->textEdit->setPlainText(texto);
}

void editor::on_actionAbrir_triggered()
{
    QString bloc = QFileDialog::getOpenFileName(this, "Abrir un Archivo");

    if(!bloc.isEmpty())
    {
        QFile archivo(bloc);
        if(archivo.open(QFile::ReadOnly | QFile::Text))
        {
            texto = bloc;
            QTextStream n(&archivo);
            QString aux = n.readAll();
            archivo.close();

            ui->textEdit->setPlainText(aux);
        }
    }
}

void editor::on_actionGuardar_triggered()
{
    QFile archivo(texto);
    if(archivo.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream stream(&archivo);

        stream << ui->textEdit->toPlainText();

        archivo.flush();
        archivo.close();
    }
}

void editor::on_actionGuardar_Como_triggered()
{
    QString bloc = QFileDialog::getSaveFileName(this, "Guardar Como");
    if(!bloc.isEmpty())
    {
        texto = bloc;
        on_actionGuardar_triggered();
    }
}

void editor::on_actionCopiar_triggered()
{
    ui->textEdit->copy();
}

void editor::on_actionCortar_triggered()
{
    ui->textEdit->cut();
}

void editor::on_actionPegar_triggered()
{
    ui->textEdit->paste();
}

void editor::on_actionDeshacer_triggered()
{
    ui->textEdit->undo();
}

void editor::on_actionRehacer_triggered()
{
    ui->textEdit->redo();
}



void editor::on_pushButton_clicked()
{
    QString aux = ui->textEdit->toPlainText();
    int n = 0;
    QString palabra;
    int i = 0;


   while(n != aux.size())
    {
        if(aux[n] == ' ' || n== aux.size()-1)
        {
            nodo->insert_word(palabra.toStdString());
            palabra.clear();
            n++;
            i=0;
        }
        else
        {
            palabra[i] = aux[n];
            n++;
            i++;
        }
    }

    if(nodo->contains("hola")){
    //QString todo = QString::fromStdString(nodo->to_str());
    ui->mostrar->setPlainText("verdadero");
    }
    else{
        ui->mostrar->setPlainText("falso");}
}

void editor::on_pushButton_2_clicked()
{
    ui->mostrar->setPlainText(QString::fromStdString(nodo->to_str()));
}

void editor::on_pushButton_3_clicked()
{
    vbuscar *buscar = new vbuscar(this);
    if(nodo->contains(ui->lineEdit->text().toStdString()))
    {
        buscar->insertar_palabra(ui->lineEdit->text());
    }
    else
    {
        buscar->insertar_palabra("No contenida");
    }
    buscar->show();
}

QString editor::mostrar_palabra()
{
    return ui->lineEdit->text();
}
