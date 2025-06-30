#ifndef PERSONA_H
#define PERSONA_H

class Persona
{
    long dni;
    char* apellido;
    char* nombres;
public:
    Persona();
    Persona(long dni, char* apellido, char* nombres);

    virtual void mostrarInformacion() = 0;

    long getDni() const;
    void setDni(long newDni);
    char *getApellido() const;
    void setApellido(char *newApellido);
    char *getNombres() const;
    void setNombres(char *newNombres);
};

#endif // PERSONA_H
