#include "nodopila.h"

template<class T>
nodoPila<T> *nodoPila<T>::getSiguiente() const
{
    return siguiente;
}

template<class T>
void nodoPila<T>::setSiguiente(nodoPila<T> *newSiguiente)
{
    siguiente = newSiguiente;
}

template<class T>
nodoPila<T>::nodoPila()
{
    this->siguiente = nullptr;
}

template<class T>
nodoPila<T>::nodoPila(T dato)
{
    this->dato = dato;
    this->siguiente = nullptr;

}

template <class T>
T nodoPila<T>::getDato() const
{
    return dato;
}
template <class T>
void nodoPila<T>::setDato(const T &newDato)
{
    dato = newDato;
}
