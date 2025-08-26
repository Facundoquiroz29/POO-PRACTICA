#include "pila.h"

template<class T>
pila<T>::pila()
{
    this->cabeza = nullptr;
}

template<class T>
void pila<T>::agregarDato(T dato)
{
    nodoPila<T>* nuevoNodo = new nodoPila<T>();
    nuevoNodo->setDato(dato);
    nuevoNodo->setSiguiente(this->cabeza);
    this->cabeza = nuevoNodo;
}

template<class T>
bool pila<T>::pilaVacia()
{
    return this->cabeza == nullptr;
}

template<class T>
T pila<T>::obtenerDato()
{
    T dato;
    if(!this->pilaVacia())
    {
        dato = this->cabeza->getDato();
        this->cabeza = cabeza->getSiguiente();
    }
    return dato;
}

