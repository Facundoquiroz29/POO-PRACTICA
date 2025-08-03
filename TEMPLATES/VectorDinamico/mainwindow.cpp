#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    actualizarLista();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::actualizarLista()
{
    ui->listWidget->clear();
    for(int i=0; i<vector.getSize(); i++)
    {
        ui->listWidget->addItem(QString::number(vector.obdate(i)));
    }
}



void MainWindow::on_pushButtonAdd_clicked()
{
    bool ok;
    int dato = ui->lineEdit->text().toInt(&ok);
    int indice = ui->spinBox->value();

    if(!ok){
        QMessageBox::warning(this, "Error", "Dato invalido");
    }

    vector.adddatoindice(dato, indice);
}

void MainWindow::on_pushButtonDelete_clicked()
{
    int indice = ui->spinBox->value();
    vector.deletedateporindex(indice);
    actualizarLista();
}


