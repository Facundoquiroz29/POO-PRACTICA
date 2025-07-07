#ifndef CURSO_H
#define CURSO_H

#include "alumno.h"
#include "profesor.h"

class Curso
{
private:
    long ID;
    char* Nombre;
    int CantCupo;
    Profesor* profesor = nullptr;
    Alumno** alumnos = nullptr;
    int CantAlumnos = 0;

public:
    Curso();
    Curso(long ID, const char *Nombre, int CantCupo);

    char *getNombre() const;
    void setNombre(char *newNombre);
    int getCantCupo() const;
    void setCantCupo(int newCantCupo);
    Profesor *getProfesor() const;
    void setProfesor(const Profesor* newProfesor);


    bool admiteInscripcion();
    bool addAlumnos(Alumno* f);
    bool ExistAlumno(char* Nlegajo);
    bool deleteAlumno(Alumno *f);


    void mostrarInformacion();
    Alumno **getAlumnos() const;
    void setAlumnos(Alumno **newAlumnos);
    int getCantAlumnos() const;

    ~Curso();

    };

#endif // CURSO_H
