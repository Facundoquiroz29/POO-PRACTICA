#include "cola.h"
template<class T>
cola<T>::cola() {
    this->fondo = nullptr;
    this->frente = nullptr;
}

template<class T>
void cola<T>::agregarDato(T dato)
{
    nodo<T>* nuevo_nodo = new nodo<T>(dato);
    //nuevo_nodo->setDato(dato);
    if(this->colavacia())
    {
        this->frente = nuevo_nodo;
        this->fondo = nuevo_nodo;
    } else {
        fondo->setSiguiente(nuevo_nodo);
        fondo = nuevo_nodo;
    }
    //delete nuevo_nodo;
}

template<class T>
bool cola<T>::colavacia()
{
    return ((this->frente == nullptr) && (this->fondo == nullptr));
}

template<class T>
T cola<T>::obtenerDato()
{
    if(this->colavacia())
        return T();

    nodo<T>* aux = frente;
    T dato = aux->getDato();
    frente = aux->getSiguiente();
    delete aux;

    //if(this->frente == nullptr)
      //  this->fondo = nullptr;

    return dato;
}

