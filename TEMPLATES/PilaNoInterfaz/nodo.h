#ifndef NODO_H
#define NODO_H

template <class T>
class Nodo
{
private:
    T Data;
    Nodo<T>* next;

public:
    Nodo(T Data);
    T getData() const;
    void setData(const T &newData);
    Nodo<T> *getNext() const;
    void setNext(Nodo<T> *newNext);
};

#endif // NODO_H
