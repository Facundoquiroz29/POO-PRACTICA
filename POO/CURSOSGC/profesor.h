#ifndef PROFESOR_H
#define PROFESOR_H

#include "persona.h"
class Profesor : public Persona
{
    char* cuil;
public:
    Profesor();
    Profesor(long dni, const char *apellido, const char *nombres, const char *cuil);

    void mostrarInformacion();
    char *getCuil() const;
    void setCuil(char *newCuil);

    ~Profesor();
};

#endif // PROFESOR_H
