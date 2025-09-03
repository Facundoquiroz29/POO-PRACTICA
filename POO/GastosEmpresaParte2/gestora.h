#ifndef GESTORA_H
#define GESTORA_H
#include "compra.h"

class gestora
{
private:
    compra* compras;
    int cantidad = 0;
    float MontoTotal;
    float MontoA;
    float MontoB;
    float MontoC;
public:
    gestora();
    void addcompra(char tipo, char* descripcion, float precio);
    void calcularMontos();
    void mostrarTotal();
    void mostrarCompras();
    bool comprasiguales(compra f);
};



#endif // GESTORA_H
