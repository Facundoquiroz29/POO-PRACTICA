#include "nodo.h"
template<class T>
Nodo<T>::Nodo(T Data)
{
    this->Data = Data;
    this->next = nullptr;
}

template<class T>
T Nodo<T>::getData() const
{
    return this->Data;
}

template<class T>
void Nodo<T>::setData(const T &newData)
{
    Data = newData;
}

template<class T>
Nodo<T> *Nodo<T>::getNext() const
{
    return next;
}

template<class T>
void Nodo<T>::setNext(Nodo<T> *newNext)
{
    next = newNext;
}

