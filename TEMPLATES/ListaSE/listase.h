#ifndef LISTASE_H
#define LISTASE_H
#include "nodo.h"

template<class T>
class ListaSE
{
private:
    Nodo<T>* cabeza;
public:
    ListaSE();
    void agregarInicio(T dato);
    void agregarFinal(T dato);
    void agregarOrdenado(T dato);
    bool eliminarDato(T dato);
    bool contieneDato(T dato) const;
    //void mostrarDatos();
    bool listaVacia() const;
    ~ListaSE();
};

#endif // LISTASE_H
