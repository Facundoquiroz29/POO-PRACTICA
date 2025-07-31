#include "vectordinamico.h"


template<class T>
vectordinamico<T>::vectordinamico()
{}

template<class T>
void vectordinamico<T>::agregar(T dato)
{
    T* aux = new T[this->tamanio + 1];
    for(int i=0; i < this->tamanio; i++)
        aux[i] = this->datos[i];
    aux[this->tamanio] = dato;

    if(this->datos != nullptr){
        delete [] this->datos;
    }

    this->tamanio++;
    this->datos = aux;
}

template<class T>
void vectordinamico<T>::agregarTodo(vectordinamico<T> datos)
{
    T* aux = new T[this->tamanio + datos.tamanio];
    for(int i = 0; i < this->tamanio; i++){
        aux[i] = this->datos[i];
    }

    for(int i = this->tamanio; i < this->tamanio + datos.tamanio; i++){
        aux[i] = datos.datos[i - this->tamanio];
    }

    if(this->datos != nullptr){
        delete[]this->datos;
    }

    this->tamanio = this->tamanio + datos.tamanio;
    this->datos = aux;
}

template<class T>
T vectordinamico<T>::getDatos(int indice) const
{
    return this->datos[indice];
}

template<class T>
int vectordinamico<T>::getTamanio() const
{
    return this->tamanio;
}




