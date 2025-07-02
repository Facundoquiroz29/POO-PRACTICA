#ifndef CURSO_H
#define CURSO_H

#include "alumno.h"
#include "profesor.h"

class Curso
{
private:
    char* Nombre;
    int CantCupo;
    Profesor profesor;
    Alumno** alumnos = nullptr;
    int CantAlumnos = 0;
public:
    Curso();
    Curso(char* Nombre, int CantCupo);

    char *getNombre() const;
    void setNombre(char *newNombre);
    int getCantCupo() const;
    void setCantCupo(int newCantCupo);
    Profesor getProfesor() const;
    void setProfesor(const Profesor &newProfesor);


    bool admiteInscripcion();
    void addAlumnos(Alumno* f);
    bool ExistAlumno(Alumno *f);
    void deleteAlumno(Alumno *f);


    void mostrarInformacion();
    Alumno **getAlumnos() const;
    void setAlumnos(Alumno **newAlumnos);
    int getCantAlumnos() const;
};

#endif // CURSO_H
