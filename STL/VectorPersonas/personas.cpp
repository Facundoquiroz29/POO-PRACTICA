#include "personas.h"

std::string Personas::getNombre() const
{
    return nombre;
}

void Personas::setNombre(const std::string &newNombre)
{
    nombre = newNombre;
}

long Personas::getDni() const
{
    return dni;
}

void Personas::setDni(long newDni)
{
    dni = newDni;
}

Personas::Personas(){}

Personas::Personas(std::string nombre, long dni) {
    this->nombre = nombre;
    this->dni = dni;
}
