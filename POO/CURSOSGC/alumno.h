#ifndef ALUMNO_H
#define ALUMNO_H

#include "persona.h"
class Alumno : public Persona
{
private:
    char* nLegajo;
public:
    Alumno();
    Alumno(long dni,const char *apellido, const char *nombres, const char* nLegajo);

    void mostrarInformacion();

    char *getNLegajo() const;
    void setNLegajo(char *newNLegajo);

    ~Alumno();
};

#endif // ALUMNO_H
