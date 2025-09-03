#include "gestora.h"
#include <iostream>
using namespace  std;;

gestora::gestora() {
    this->compras = nullptr;
}

void gestora::addcompra(char *descripcion, float precio)
{
    compra objeto(descripcion, precio);
    compra* aux = new compra[this->cantidad+1];
    for(int i=0; i<this->cantidad; i++)
    {
        aux[i] = this->compras[i];
    }
    delete[]compras;
    aux[this->cantidad] = objeto;
    this->compras = aux;
    this->cantidad++;
}

void gestora::mostrarCompras()
{
    for(int i=0; i<this->cantidad; i++)
    {
        cout << "Gastos: " <<this->compras[i].getDescripcion() << ",  Precio: " <<this->compras[i].getPrecio() << endl;

    }
}

