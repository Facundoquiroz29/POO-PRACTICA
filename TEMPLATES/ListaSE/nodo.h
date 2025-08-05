#ifndef NODO_H
#define NODO_H

template<class T>
class Nodo
{
private:
    T dato;
    Nodo<T>* next;

public:
    Nodo();
    Nodo(T dato);
    T getDato() const;
    void setDato(const T &newDato);
    Nodo<T> *getNext();
    void setNext(Nodo<T> *newNext);
};

#endif // NODO_H
