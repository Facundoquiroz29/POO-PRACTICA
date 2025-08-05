#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    actualizarLista();
    connect(ui->pushButtonAdd, &QPushButton::clicked, this, &MainWindow::agregar);
    connect(ui->pushButtonDelete, &QPushButton::clicked, this, &MainWindow::eliminar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::agregar()
{
    bool ok;
    int dato = ui->lineEdit->text().toInt(&ok);
    int indice = ui->spinBox->value();

    if(!ok){
        QMessageBox::warning(this, "Error", "Dato invalido");
        return;
    }

    vector.adddatoindice(dato, indice);
    actualizarLista();
}

void MainWindow::eliminar()
{
    int indice = ui->spinBox->value();
    vector.deletedateporindex(indice);
    actualizarLista();
}

void MainWindow::actualizarLista()
{
    ui->listWidget->clear();
    for(int i=0; i<vector.getSize(); i++)
    {
        ui->listWidget->addItem(QString::number(vector.obdate(i)));
    }
}






