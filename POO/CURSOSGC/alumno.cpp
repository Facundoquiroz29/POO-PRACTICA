#include "alumno.h"
#include <cstring>
#include <iostream>

Alumno::Alumno() {}

Alumno::Alumno(long dni,const char *apellido, const char *nombres, const char* nLegajo) : Persona(dni, apellido, nombres)
{
    this->nLegajo = new char[strlen(nLegajo)+1];
    strcpy(this->nLegajo, nLegajo);
}

void Alumno::mostrarInformacion()
{
    std::cout << "Alumnos: " << std::endl;
    std::cout << "  Nro. Legajo: " << nLegajo << std::endl;
    std::cout << "  Apellido: " << getApellido() << std::endl;
    std::cout << "  Nombres: " << getNombres() << std::endl;
    std::cout << "  DNI: " << getDni() << std::endl;
}



char *Alumno::getNLegajo() const
{
    return nLegajo;
}

void Alumno::setNLegajo(char *newNLegajo)
{
    nLegajo = newNLegajo;
}

Alumno::~Alumno()
{
}
