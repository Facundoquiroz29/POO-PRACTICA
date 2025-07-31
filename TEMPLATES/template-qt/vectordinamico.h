#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H

template <class H>
class VectorDinamico
{
private:
    H* dates = nullptr;
    int size = 0;
public:
    VectorDinamico();
    void adddate(H date);
    void adddates(VectorDinamico<H> dates);
    H getDates(int indice) const;
    int getSize();
};
#endif // VECTORDINAMICO_H
