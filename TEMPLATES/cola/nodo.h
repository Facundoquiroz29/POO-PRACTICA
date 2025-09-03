#ifndef NODO_H
#define NODO_H

template <class T>
class nodo
{
private:
    T dato;
    nodo<T> *siguiente;

public:
    nodo();
    nodo(T dato);
    T getDato() const;
    void setDato(const T &newDato);

    nodo<T> *getSiguiente() const;
    void setSiguiente(nodo<T> *newSiguiente);
};

#endif // NODO_H
