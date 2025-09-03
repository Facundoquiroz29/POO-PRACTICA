#include "gestora.h"
#include <iostream>
using namespace  std;;

gestora::gestora() {
    this->compras = nullptr;
    this->MontoA = 0;
    this->MontoB = 0;
    this->MontoC = 0;
    this->MontoTotal = 0;
}

void gestora::addcompra(char tipo, char *descripcion, float precio)
{
    compra objeto(tipo, descripcion, precio);
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

void gestora::calcularMontos()
{

    for(int i=0; i<this->cantidad; i++)
    {
        if(this->compras[i] == 'a')
        //
        {
            this->MontoA +=this->compras[i].getPrecio();
            this->MontoTotal += this->compras[i].getPrecio();
        }
        if(this->compras[i] == 'b')
        {
            this->MontoB += this->compras[i].getPrecio();
            this->MontoTotal += this->compras[i].getPrecio();
        }
        if(this->compras[i] == 'c')
        {
            this->MontoC += this->compras[i].getPrecio();
            this->MontoTotal += this->compras[i].getPrecio();
        }
    }

}

void gestora::mostrarTotal()
{
    cout << "Monto total del tipo A: $" << this->MontoA << endl;
    cout << "Monto total del tipo B: $" << this->MontoB << endl;
    cout << "Monto total del tipo C: $" << this->MontoC << endl;
    cout << "Monto total: $" << this->MontoTotal << endl;
}

void gestora::mostrarCompras()
{
    for(int i=0; i<this->cantidad; i++)
    {
        if(this->compras[i] == 'a')
        {
            cout << "Gastos de tipo: " <<this->compras[i].getTipo() << ". "<< this->compras[i].getDescripcion()<< ",  Precio: " <<this->compras[i].getPrecio() << endl;
        }
        if(this->compras[i] == 'b')
        {
            cout << "Gastos de tipo: " <<this->compras[i].getTipo() << ". "<< this->compras[i].getDescripcion()<< ",  Precio: " <<this->compras[i].getPrecio() << endl;
        }
        if(this->compras[i] == 'c')
        {
            cout << "Gastos de tipo: " <<this->compras[i].getTipo() << ". "<< this->compras[i].getDescripcion()<< ",  Precio: " <<this->compras[i].getPrecio() << endl;
        }
    }
}

bool gestora::comprasiguales(compra f)
{
    for(int i=0; i<this->cantidad; i++)
    {
        if(this->compras[i] == f)
            return true;
    }
    return false;
}

