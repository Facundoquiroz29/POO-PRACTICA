#include "vectordinamico.h"
#include <stdexcept>

template<class P>
VectorDinamico<P>::VectorDinamico()
{
    this->dates = nullptr;
    this->size = 0;
}

template<class P>
void VectorDinamico<P>::adddato(P date)
{
    P* aux = new P[this->size + 1];
    for(int i = 0; i < this->size; i++){
        aux[i] = this->dates[i];
    }
    aux[this->size] = date;
    delete [] this->dates;
    this->size++;
    dates = aux;
}

template<class P>
void VectorDinamico<P>::adddatoindice(P date, int index)
{
    if(!busqindex(index))
        return;
    P* aux = new P[this->size + 1];
    int j = 0;
    for(int i=0; i<this->size + 1; i++)
    {
        if(i == index){
            aux[i] = date;
        } else {
            aux[i] = this->dates[j];
            j++;
        }
    }
    delete [] this->dates;
    this->size++;
    this->dates = aux;
}

template<class P>
bool VectorDinamico<P>::busqdate(P date)
{
    for(int i = 0; i < this->size ; i++){
        if(this->dates[i] == date)
            return true;
    }
    return false;
}


template<class P>
bool VectorDinamico<P>::busqindex(int index)
{
    return index >= 0 && index < this->size;
}

template<class P>
void VectorDinamico<P>::deletedateporindex(int index) // eliminar por indice.
{
    if(!busqindex(index))
        return;
    P* aux = new P[this->size -1];
    int j = 0;
    for( int i = 0; i < this->size; i++)
    {
        if(i != index){
            aux[j] = this->dates[i];
            j++;
        }
    }
    delete [] this->dates;
    this->size--;
    this->dates = aux;
}

template<class P>
void VectorDinamico<P>::deletedate(P date)
{
    if(!busqdate(date)) // BUSCAMOS SI EXISTE EL DATO
        return;

    int CountDates = 0;
    for(int i = 0; i < this->size; i++) //CONTAMOS LA CANTIDAD DE VECES QUE EXISTE
    {
        if(this->dates[i] == date)
        {
            CountDates++;
        }
    }
    P* aux = new P [this->size - CountDates];
    int j = 0;
    for(int i = 0; i < this->size; i++) //COPIAMOS EL DATO EN EL NUEVO VECTOR DINAMICO
    {
        if(date != this->dates[i])
        {
            aux[j] = this->dates[i];
            j++;

        }
    }
    delete [] this->dates;
    this->size = this->size - CountDates;
    this->dates = aux;
}

template<class P>
P VectorDinamico<P>::obdate(int index)
{
    if(!busqindex(index))
        throw std::out_of_range("Indice fuera de rango!");
    return this->dates[index];
}

template<class P>
int VectorDinamico<P>::getSize() const
{
    return this->size;
}


template<class P>
VectorDinamico<P>::~VectorDinamico()
{

}


