#include "nodo.h"
template<class T>
Nodo<T>::Nodo(){
    this->next = nullptr;
}

template<class T>
Nodo<T>::Nodo(T dato)
{
    this->dato = dato;
    this->next = nullptr;
}

template<class T>
T Nodo<T>::getDato() const
{
    return this->dato;
}

template<class T>
void Nodo<T>::setDato(const T &newDato)
{
    dato = newDato;
}


template<class T>
Nodo<T> *Nodo<T>::getNext()
{
    return next;
}

template<class T>
void Nodo<T>::setNext(Nodo<T> *newNext)
{
    next = newNext;
}
