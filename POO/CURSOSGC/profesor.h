#ifndef PROFESOR_H
#define PROFESOR_H

#include "persona.h"
class Profesor : public Persona
{
    char* cuil;
public:
    Profesor();
    Profesor(long dni, char* apellido, char* nombres, char* cuil);

    void mostrarInformacion();
    char *getCuil() const;
    void setCuil(char *newCuil);
};

#endif // PROFESOR_H
