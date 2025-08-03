#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "vectordinamico.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void on_pushButtonAdd_clicked(); // Botones para agregar
    void on_pushButtonDelete_clicked(); // botones para eliminar

private:
    Ui::MainWindow *ui;
    VectorDinamico <int> vector; // o el tipo que se utilice
    void actualizarLista();
};
#endif // MAINWINDOW_H
