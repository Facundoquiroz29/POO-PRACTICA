#ifndef COLA_H
#define COLA_H
#include "nodo.h"

template<class T>
class cola
{
private:
    nodo<T>* frente;
    nodo<T>* fondo;


public:
    cola();
    void agregarDato(T dato);
    bool colavacia();
    T obtenerDato();
};

#endif // COLA_H
