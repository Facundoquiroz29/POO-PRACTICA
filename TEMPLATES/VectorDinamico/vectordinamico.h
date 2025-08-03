#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H

template <class P>
class VectorDinamico
{
    P* dates;
    int size;
public:
    VectorDinamico();
    //---------------------
    void adddato(P date);
    void adddatoindice(P date, int index);
    void deletedateporindex(int index);
    void deletedate(P date);
    P obdate(int index);
    //---------------------
    bool busqindex(int index);
    bool busqdate(P date);

    ~VectorDinamico();

    int getSize() const;
};

#include "vectordinamico.cpp"

#endif // VECTORDINAMICO_H
