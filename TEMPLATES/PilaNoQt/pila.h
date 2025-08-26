#ifndef PILA_H
#define PILA_H
#include "nodopila.h"

template <class T>
class pila
{
private:
    nodoPila<T>* cabeza;
public:
    pila();
    void agregarDato(T dato);
    bool pilaVacia();
    T obtenerDato();
};

#endif // PILA_H
