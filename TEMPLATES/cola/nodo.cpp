#include "nodo.h"

template <class T>
nodo<T>::nodo() {
    this->siguiente = nullptr;
}

template <class T>
nodo<T>::nodo(T dato) {
    this->dato = dato;
    this->siguiente = nullptr;
}

template <class T>
T nodo<T>::getDato() const
{
    return dato;
}
template <class T>
void nodo<T>::setDato(const T &newDato)
{
    dato = newDato;
}


template <class T>
nodo<T> *nodo<T>::getSiguiente() const
{
    return siguiente;
}
template <class T>
void nodo<T>::setSiguiente(nodo<T> *newSiguiente)
{
    siguiente = newSiguiente;
}

