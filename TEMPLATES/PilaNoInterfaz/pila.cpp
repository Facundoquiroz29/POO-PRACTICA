#include "pila.h"

template<class T>
Pila<T>::Pila()
{
    this->start = nullptr;
}

template<class T>
Pila<T>::~Pila()
{
    Nodo<T>* aux;
    while(!this->emptyStack())
    {
        aux = start;
        start = start->getNext();
        delete(aux);
    }

}

template<class T>
void Pila<T>::addData(T x)
{
    Nodo<T>* new_node = new Nodo<T>(x);
    new_node->setNext(start);
    start = new_node;
}

template<class T>
T Pila<T>::obtainData()
{
    T x = start->getData();
    Nodo<T>* aux = start;
    start = start->getNext();
    delete aux;
    return x;
}

template<class T>
bool Pila<T>::emptyStack()
{
    return this->start == nullptr;
}
