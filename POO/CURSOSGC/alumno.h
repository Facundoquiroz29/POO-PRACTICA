#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"
class Alumno : public Persona
{
private:
    char* nLegajo;
public:
    Alumno();
    Alumno(long dni, char* apellido, char* nombres, char* nLegajo);

    void mostrarInformacion();

    char *getNLegajo() const;
    void setNLegajo(char *newNLegajo);
};

#endif // ALUMNO_H
