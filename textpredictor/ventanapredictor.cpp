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

    completer->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    completer->setWrapAround(false);
    TextEditor->setCompleter(completer);
    connect(TextEditor,SIGNAL(textChanged()),this,SLOT(on_textEditor_textChanged()));

    currentTextType = "Monospace";
    QFont f("Monospace",10, QFont::Normal);
    TextEditor->setFont(f);
    CurrentTextSize = 10;

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
    TextEditor->setPlainText("");
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

       QStringListModel *model = (QStringListModel*)(completer->model());
       model->setStringList(lista);

}

void ventanapredictor::on_actionTexto_Rojo_triggered()
{
    TextEditor->setStyleSheet("QTextEdit { "+ currentBackground +" color:red } ");
}

void ventanapredictor::on_actionTexto_Azul_triggered()
{
    TextEditor->setStyleSheet("QTextEdit { "+ currentBackground +" color:blue } ");
}

void ventanapredictor::on_actionTexto_Verde_triggered()
{
    TextEditor->setStyleSheet("QTextEdit { "+ currentBackground +" color:green } ");
}

void ventanapredictor::on_actionTexto_Negro_triggered()
{
    TextEditor->setStyleSheet("QTextEdit { "+ currentBackground +" color:black } ");
}


void ventanapredictor::on_actionOblivion_triggered()
{
    TextEditor->setStyleSheet("QTextEdit { background-color:dimgray; color:white } ");
    currentBackground = "background-color:dimgray;";
}

void ventanapredictor::on_actionDarkBlue_triggered()
{
    TextEditor->setStyleSheet("QTextEdit { background-color:midnightblue; color:lightgray } ");
    currentBackground = "background-color:midnightblue;";
}

void ventanapredictor::on_actionRedSkin_triggered()
{
    TextEditor->setStyleSheet("QTextEdit { background-color:maroon; color:white } ");
    currentBackground = "background-color:maroon;";
}

void ventanapredictor::on_actionClasico_triggered()
{
    TextEditor->setStyleSheet("QTextEdit { background-color:white; color:black } ");
    currentBackground = "background-color:white;";
}

void ventanapredictor::on_actionTexto_Morado_triggered()
{
    TextEditor->setStyleSheet("QTextEdit { "+ currentBackground +" color:indigo } ");
}

void ventanapredictor::on_actionBlack_Orange_triggered()
{
    TextEditor->setStyleSheet("QTextEdit { background-color:black; color:darkorange } ");
    currentBackground = "background-color:black;";
}

void ventanapredictor::on_actionTimes_triggered()
{
    currentTextType = "Times";
    QFont serifFont("Times", CurrentTextSize, QFont::Normal);
    TextEditor->setFont(serifFont);
}

void ventanapredictor::on_actionHelvetica_Cronyx_triggered()
{
    currentTextType = "Helvetica";
    QFont f("Helvetica",CurrentTextSize, QFont::DemiBold);
    TextEditor->setFont(f);
}

void ventanapredictor::on_actionCourier_triggered()
{
    currentTextType = "Courier";
    QFont f("Courier",CurrentTextSize, QFont::Normal);
    TextEditor->setFont(f);
}

void ventanapredictor::on_actionOldEnglish_triggered()
{
    currentTextType = "OldEnglish";
    QFont f("OldEnglish",CurrentTextSize, QFont::Normal);
    TextEditor->setFont(f);
}

void ventanapredictor::on_action10_triggered()
{
    if(currentTextType == "Helvetica")
    {
        QFont f(currentTextType,10, QFont::DemiBold);
        TextEditor->setFont(f);
        CurrentTextSize = 10;
    }
    else
    {
        QFont f(currentTextType,10, QFont::Normal);
        TextEditor->setFont(f);
        CurrentTextSize = 10;
    }
}

void ventanapredictor::on_action12_triggered()
{
    if(currentTextType == "Helvetica")
    {
        QFont f(currentTextType,12, QFont::DemiBold);
        TextEditor->setFont(f);
        CurrentTextSize = 12;
    }
    else
    {
        QFont f(currentTextType,12, QFont::Normal);
        TextEditor->setFont(f);
        CurrentTextSize = 12;
    }
}

void ventanapredictor::on_action14_triggered()
{
    if(currentTextType == "Helvetica")
    {
        QFont f(currentTextType,14, QFont::DemiBold);
        TextEditor->setFont(f);
        CurrentTextSize = 14;
    }
    else
    {
        QFont f(currentTextType,14, QFont::Normal);
        TextEditor->setFont(f);
        CurrentTextSize = 14;
    }
}

void ventanapredictor::on_action16_triggered()
{
    if(currentTextType == "Helvetica")
    {
        QFont f(currentTextType,16, QFont::DemiBold);
        TextEditor->setFont(f);
        CurrentTextSize = 16;
    }
    else
    {
        QFont f(currentTextType,16, QFont::Normal);
        TextEditor->setFont(f);
        CurrentTextSize = 16;
    }
}

void ventanapredictor::on_actionRoyalGold_triggered()
{
    TextEditor->setStyleSheet("QTextEdit { background-color:lightseagreen; color:gold } ");
    currentBackground = "background-color:lightseagreen;";
}

void ventanapredictor::on_actionPor_Defecto_Monospace_triggered()
{
    currentTextType = "Monospace";
    QFont f("Monospace",CurrentTextSize, QFont::Normal);
    TextEditor->setFont(f);
}
