#include "listase.h"

template<class T>
ListaSE<T>::ListaSE()
{
    this->cabeza = nullptr;
}


template<class T>
void ListaSE<T>::agregarInicio(T dato)
{
    Nodo<T>* nuevo_nodo = new Nodo<T>();
    nuevo_nodo->setDato(dato);
    nuevo_nodo->setNext(cabeza);
    cabeza = nuevo_nodo;
}

template<class T>
void ListaSE<T>::agregarFinal(T dato)
{
    Nodo<T>* nuevo_nodo = new Nodo<T>(dato);
    if(this->listaVacia()) {
        cabeza = nuevo_nodo;
    } else {
        Nodo<T>* aux = cabeza;
        while(aux->getNext() != nullptr)
        {
            aux = aux->getNext();
        }
        aux->setNext(nuevo_nodo);
    }
}


template<class T>
bool ListaSE<T>::listaVacia() const
{
    return cabeza == nullptr;
}


template<class T>
ListaSE<T>::~ListaSE()
{
    while(this->cabeza != nullptr)
    {
        Nodo<T>* aux = cabeza;
        cabeza = cabeza->next;
        delete aux;
    }
}
