#ifndef NODOPILA_H
#define NODOPILA_H
template <class T>
class nodoPila
{
private:
    T dato;
    nodoPila<T>* siguiente;
public:
    nodoPila();
    nodoPila(T dato);
    T getDato() const;
    void setDato(const T &newDato);
    nodoPila<T> *getSiguiente() const;
    void setSiguiente(nodoPila<T> *newSiguiente);
};

#endif // NODOPILA_H
