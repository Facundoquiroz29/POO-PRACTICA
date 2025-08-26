#include "vectordinamico.h"

template<class T>
VectorDinamico<T>::VectorDinamico()
{
    this->Datas = nullptr;
    this->size = 0;
}

template<class T>
bool VectorDinamico<T>::deleteData(T Data)
{
    if(!existData(Data))
        return false;


    T* aux = new T[this->size - 1];
    int j = 0;
    for(int i=0; i < this->size; i++)
    {
        if(this->Datas[i] != Data)
        {
            aux[j] = this->Datas[i];
            j++;
        }
    }
    this->Datas = aux;
    delete [] aux;
    return true;
}

template<class T>
bool VectorDinamico<T>::deleteDataIndex(int index)
{
    if(!rango(index))
        return false;


    return true;
}

template<class T>
void VectorDinamico<T>::addData(T Data)
{
    T* aux = new T[this->size + 1];
    for(int i = 0; i < this->size; i++)
    {
        aux[i] = this->Datas[i];
    }
    aux[size] = Data;
    this->size++;
    this->Datas = aux;
    delete [] aux;
}

template<class T>
bool VectorDinamico<T>::existData(T Data)
{
    for(int i=0; i<this->size; i++)
    {
        if(this->Datas[i] == Data)
        {
            return true;
        }
    }
    return false;
}

template<class T>
bool VectorDinamico<T>::rango(int index)
{
    return((index >= 0) && (index < this->size));
}
