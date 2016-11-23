#include "ventanapredictor.h"
#include "ui_ventanapredictor.h"

ventanapredictor::ventanapredictor(QWidget *parent) :
    QMainWindow(parent), completer(0),
    ui(new Ui::ventanapredictor)
{
    ui->setupUi(this);

    TextEditor = new texteditpredictor;

    QStringList stringList;
    QStringListModel *model = new QStringListModel(stringList);
    completer = new QCompleter(model, this);

    //completer = new QCompleter(lista, this);
    //completer->setModel(modelFromFile(":/resources/wordlist.txt"));
    completer->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    completer->setWrapAround(false);
    TextEditor->setCompleter(completer);
    connect(TextEditor,SIGNAL(textChanged()),this,SLOT(on_textEditor_textChanged()));


    setCentralWidget(TextEditor);
    resize(800, 500);
    setWindowTitle(tr("TextPredictor"));
}

ventanapredictor::~ventanapredictor()
{
    delete ui;
}

void ventanapredictor::on_actionNuevo_triggered()
{
    Cnode *node = new Cnode('a');
    nodo->insert_child(node);
    //std::string aux;
    Cnode *aux = nodo->search_child('a');
    std::string aux2;
    aux2 = (aux->symbol());
    texto = QString::fromStdString(aux2);
    TextEditor->setPlainText(texto);
}

void ventanapredictor::on_actionAbrir_triggered()
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

            TextEditor->setPlainText(aux);
        }
    }
}

void ventanapredictor::on_actionGuardar_triggered()
{
    QFile archivo(texto);
    if(archivo.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream stream(&archivo);

        stream << TextEditor->toPlainText();

        archivo.flush();
        archivo.close();
    }
}

void ventanapredictor::on_actionGuardar_Como_triggered()
{
    QString bloc = QFileDialog::getSaveFileName(this, "Guardar Como");
    if(!bloc.isEmpty())
    {
        texto = bloc;
        on_actionGuardar_triggered();
    }
}

void ventanapredictor::on_actionCopiar_triggered()
{
    TextEditor->copy();
}

void ventanapredictor::on_actionCortar_triggered()
{
    TextEditor->cut();
}

void ventanapredictor::on_actionPegar_triggered()
{
    TextEditor->paste();
}

void ventanapredictor::on_actionDeshacer_triggered()
{
    TextEditor->undo();
}

void ventanapredictor::on_actionRehacer_triggered()
{
    TextEditor->redo();
}

void ventanapredictor::on_textEditor_textChanged()
{
    // INSERTAR PALABRA EN EL DICCIONARIO MIENTRAS SE ESCRIBE

    QString aux = TextEditor->toPlainText();
    int n = 0;
    QString palabra;
    int i = 0;


   while(n != aux.size())
    {
        if(aux[n] == ' ' || aux[n] == '\n')
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

   // #################################################################################################

      //   BUSCAR LA PALABRA EN EL DICCIONARIO MIENTRAS SE ESCRIBE


       QString original = TextEditor->toPlainText();
       QString inverso;
       int flag = 0;
       int contador = 0;

       for(int i = original.size()-1; i>=0 ; i--)
       {
           if(original[i]== ' ' || original[i] == '\n'){
               break;
           }
           else if(i==0){
               inverso[flag] = original[i];
               contador++;
               break;
           }
           else{
               inverso[flag]= original[i];
               contador++;
               flag++;
           }
       }

       flag = 0;
       QString busqueda;

       for(int i= inverso.size()-1; i>=0; i--)
       {
           busqueda[flag] = inverso[i];
           flag++;
       }

       flag = 0;


       DynList<string> auxlist = nodo->search_words(busqueda.toStdString());

       QStringList lista; //AGREGADO COMPLETER

       auxlist.for_each([&] (auto palabra){
           lista << QString::fromStdString(palabra);
       });


       //completer = new QCompleter(lista,this);  //AGREGADO COMPLETER
       QStringListModel *model = (QStringListModel*)(completer->model());


       model->setStringList(lista);

}
