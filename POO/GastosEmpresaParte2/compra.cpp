#include "compra.h"
#include <cstring>

char compra::getTipo() const
{
    return tipo;
}

compra::compra(){}

compra::compra(char tipo, char* descripcion, float precio) {
    this->tipo = tipo;
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
