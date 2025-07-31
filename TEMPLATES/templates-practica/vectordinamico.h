#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H

template<class T>
class vectordinamico
{
private:
    T* datos = nullptr;
    int tamanio = 0;
public:
    vectordinamico();
    void agregar(T dato);
    void agregarTodo(vectordinamico<T> datos);
    T getDatos(int indice) const;
    int getTamanio() const;
};

#endif // VECTORDINAMICO_H
