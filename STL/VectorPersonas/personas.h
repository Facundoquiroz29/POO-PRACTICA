#ifndef PERSONAS_H
#define PERSONAS_H
#include <string>

class Personas
{
private:
    std::string nombre;
    long dni;
public:
    Personas();
    Personas(std::string nombre, long dni);
    std::string getNombre() const;
    void setNombre(const std::string &newNombre);
    long getDni() const;
    void setDni(long newDni);
};

#endif // PERSONAS_H
