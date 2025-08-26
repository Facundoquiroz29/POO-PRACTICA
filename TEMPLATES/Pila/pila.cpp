#include "pila.h"
#include <stdexcept>

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
    if(this->emptyStack())
        throw std::out_of_range("La pila esta vacia!.");
    T x;
    Nodo<T>* aux = start;
    x = start->getData();
    start = start->getNext();
    delete aux;
    return x;
}

template<class T>
bool Pila<T>::emptyStack()
{
    return this->start == nullptr;
}
