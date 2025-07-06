#include "profesor.h"
#include <cstring>
#include <iostream>

Profesor::Profesor() {}

Profesor::Profesor(long dni,const char *apellido,const char *nombres,const char *cuil) : Persona(dni, apellido, nombres)
{
    this->cuil = new char[strlen(cuil)+1];
    strcpy(this->cuil, cuil);
}

void Profesor::mostrarInformacion()
{

    std::cout << "Profesor: " << std::endl;
    std::cout << "  Cuil: " << cuil << std::endl;
    std::cout << "  Apellido: " << getApellido() << std::endl;
    std::cout << "  Nombres: " << getNombres() << std::endl;
    std::cout << "  DNI: " << getDni() << std::endl;

}

char *Profesor::getCuil() const
{
    return cuil;
}

void Profesor::setCuil(char *newCuil)
{
    cuil = newCuil;
}

Profesor::~Profesor()
{
}


