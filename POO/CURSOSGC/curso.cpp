#include "curso.h"
#include <cstring>
#include <iostream>
Curso::Curso() {}

Curso::Curso(char* Nombre, int CantCupo)
{
    this->Nombre = new char[strlen(Nombre)+1];
    strcpy(this->Nombre, Nombre);

    this->CantCupo = CantCupo;
}

char *Curso::getNombre() const
{
    return Nombre;
}

void Curso::setNombre(char *newNombre)
{
    Nombre = newNombre;
}

int Curso::getCantCupo() const
{
    return CantCupo;
}

void Curso::setCantCupo(int newCantCupo)
{
    CantCupo = newCantCupo;
}

Profesor Curso::getProfesor() const
{
    return profesor;
}

void Curso::setProfesor(const Profesor &newProfesor)
{
    profesor = newProfesor;
}

bool Curso::admiteInscripcion()
{
    return this->CantCupo > 0;
}

bool Curso::ExistAlumno(Alumno *f) // cambiar variable por nLegajo
{
    if(f == nullptr)
        return false;

    for(int i=0; i<CantAlumnos; i++)
    {
        if(alumnos[i]== nullptr)
            continue;
        if(f->getNLegajo() == alumnos[i]->getNLegajo())
            return true;
    }
    return false;
}

void Curso::addAlumnos(Alumno *f)
{
    if(!admiteInscripcion())
    {
        std::cout << "Error. no hay mas cupos. " << std::endl;
        return;
    } else {
        Alumno** aux = new Alumno*[CantAlumnos+1];
        for(int i = 0; i<CantAlumnos; i++)
            aux[i] = alumnos[i];
        aux[CantAlumnos] = f;
        delete [] alumnos;
        alumnos = aux;
        CantAlumnos++;
        CantCupo--;
        std::cout << "Alumnos agregado. " << std::endl;
    }
}

void Curso::deleteAlumno(Alumno *f)
{
    if(!ExistAlumno(f)){
        std::cout << "Alumno no existente." << std::endl;
        return;
    }
    Alumno** aux = new Alumno*[CantAlumnos-1];
    int j = 0;
    for(int i=0; i<CantAlumnos; i++)
    {
        if(alumnos[i] == nullptr)
            continue;
        if(f->getNLegajo() != alumnos[i]->getNLegajo())
        {
            aux[j] = alumnos[i];
            j++;
        }
    }
    delete [] alumnos;
    alumnos = aux;
    CantAlumnos--;
    std::cout << "Alumno eliminado. " << std::endl;
}



int Curso::getCantAlumnos() const
{
    return CantAlumnos;
}


Alumno **Curso::getAlumnos() const
{
    return alumnos;
}


void Curso::mostrarInformacion()
{
    std::cout << "--RESUMEN CURSO--\n";
    std::cout << "  Nombre: " << Nombre << " / " << "Cupos disponibles: " << CantCupo << std::endl;
    std::cout << "  Cantidad de alumnos: " << CantAlumnos << std::endl;
    std::cout << " Profesor: " << getProfesor().getNombres()<<" "<< getProfesor().getApellido() << std::endl;
 }


