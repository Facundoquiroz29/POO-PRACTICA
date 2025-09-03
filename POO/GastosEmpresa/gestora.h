#ifndef GESTORA_H
#define GESTORA_H
#include "compra.h"

class gestora
{
private:
    compra* compras;
    int cantidad = 0;
public:
    gestora();
    void addcompra(char* descripcion, float precio);
    void mostrarCompras();
};

#endif // GESTORA_H
