#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H

template <class T>
class VectorDinamico
{
private:
    T* Datas;
    int size;

public:
    VectorDinamico();
    // add and delete
    void addData(T Data);
    bool deleteData(T Data);
    bool deleteDataIndex(int index);

    //exist
    bool existData(T Data);
    bool rango(int index);
};

#endif // VECTORDINAMICO_H
