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
void ListaSE<T>::agregarOrdenado(T dato)
{
    Nodo<T>* nuevo_nodo = new Nodo<T>(dato);
    Nodo<T>* anterior = nullptr;
    Nodo<T>* actual = cabeza;
    while(actual != nullptr && actual->getDato() < dato)
    {
        anterior = actual;
        actual = actual->getNext();
    }
    if(anterior == nullptr){
        nuevo_nodo->setNext(anterior->getNext());
        anterior->setNext(nuevo_nodo);
    } else {
        nuevo_nodo->setNext(anterior->getNext());
        anterior->setNext(nuevo_nodo);
    }
}

template<class T>
bool ListaSE<T>::eliminarDato(T dato)
{
    if(!this->contieneDato(dato))
        return false;
    Nodo<T>* actual= cabeza;
    Nodo<T>* anterior = nullptr;
    Nodo<T>* aux;
    while(actual != nullptr && actual->getDato() != dato) // buscamos
    {
        anterior = actual;
        actual = actual->getNext();
    }
    if((actual != nullptr) && (anterior == nullptr)) //eliminamos si esta en la primera posicion.
    {
        aux = actual;
        cabeza = cabeza->getNext();
        delete aux;
        return true;
    } else if((actual!= nullptr) && (anterior != nullptr)) // eliminamos cualquier dato.
    {
        aux = actual;
        anterior->setNext(actual->getNext());
        delete aux;
        return true;
    }
}

template<class T>
bool ListaSE<T>::contieneDato(T dato) const
{
    Nodo<T>* aux = cabeza;
    while( aux != nullptr)
    {
        if(aux->getDato() == dato)
            return true;
        aux = aux->getNext();
    }
    return false;
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
