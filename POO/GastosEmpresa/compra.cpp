#include "compra.h"
#include <cstring>

compra::compra(){}

compra::compra(char* descripcion, float precio) {
    this->precio = precio;
    this->descripcion = new char[strlen(descripcion)+1];
    strcpy(this->descripcion, descripcion);
}
void compra::setDescripcion(char *newDescripcion)
{
    descripcion = newDescripcion;
}

void compra::setPrecio(float newPrecio)
{
    precio = newPrecio;
}

char *compra::getDescripcion() const
{
    return descripcion;
}

float compra::getPrecio() const
{
    return precio;
}
