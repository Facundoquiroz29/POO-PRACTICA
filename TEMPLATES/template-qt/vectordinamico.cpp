#include "vectordinamico.h"

template<class H>
VectorDinamico<H>::VectorDinamico()
{}

template<class H>
void VectorDinamico<H>::adddate(H date)
{
    H* aux = new H[this->size + 1];
    for(int i = 0; i < this->size; i++)
        aux[i] =this->dates[i];
    aux[this->size] = date;
    if(this->dates != nullptr)
        delete[]this->dates;
    this->size++;
    this->dates = aux;
}

template<class H>
void VectorDinamico<H>::adddates(VectorDinamico<H> dates)
{
    H* aux = new H[this->size + dates.size];
    for(int i = 0; i < this->size; i++) // copiamos los datos ya existentes
        aux[i] = this->dates[i];

    for(int i = this->size; i<this->size + dates.size; i++) // copiamos los datos nuevos
        aux[i] = dates.dates[i - this->size];

    if(this->dates != nullptr)
        delete[] dates;
    this->size = size + dates.size;
    this->dates = aux;
}

template<class H>
H VectorDinamico<H>::getDates(int indice) const
{
    return this->dates[indice];
}

template<class H>
int VectorDinamico<H>::getSize()
{
    return this->size;
}
