#include "persona.h"
#include <cstring>

Persona::Persona() {}

Persona::Persona(long dni,const char *apellido,const char *nombres)
{
    this->dni = dni;
    this->apellido = new char[strlen(apellido)+1];
    strcpy(this->apellido, apellido);
    this->nombres = new char[strlen(nombres)+1];
    strcpy(this->nombres, nombres);
}

long Persona::getDni() const
{
    return dni;
}

void Persona::setDni(long newDni)
{
    dni = newDni;
}

char *Persona::getApellido() const
{
    return apellido;
}

void Persona::setApellido(char *newApellido)
{
    apellido = newApellido;
}

char *Persona::getNombres() const
{
    return nombres;
}

void Persona::setNombres(char *newNombres)
{
    nombres = newNombres;
}

Persona::~Persona()
{}
