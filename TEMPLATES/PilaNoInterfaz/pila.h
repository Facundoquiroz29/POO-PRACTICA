#ifndef PILA_H
#define PILA_H
#include "nodo.h"

template<class T>
class Pila
{
private:
    Nodo<T>* start;
public:
    Pila();
    ~Pila();
    void addData(T x);
    T obtainData();
    bool emptyStack();

};
#endif // PILA_H
