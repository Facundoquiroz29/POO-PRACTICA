#include "curso.h"
#include <cstring>
#include <iostream>

Curso::Curso() {}

Curso::Curso(long ID,const char* Nombre, int CantCupo)
{
    this->ID = ID;
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

Profesor *Curso::getProfesor() const
{
    return profesor;
}

void Curso::setProfesor(const Profesor* newProfesor)
{
    this->profesor = new Profesor(*newProfesor);

}

bool Curso::admiteInscripcion()
{
    return this->CantCupo > 0;
}

bool Curso::ExistAlumno(char* Nlegajo) // cambiar variable por nLegajo
{
    if(Nlegajo == nullptr)
        return false;

    for(int i=0; i<CantAlumnos; i++)
    {
        if(alumnos[i] == nullptr)
            continue;
        if(Nlegajo == alumnos[i]->getNLegajo())
            return true;
    }
    return false;
}

bool Curso::addAlumnos(Alumno *f)
{
    if(!admiteInscripcion())
        return false;
    Alumno** aux = new Alumno*[CantAlumnos+1];
    for(int i = 0; i<CantAlumnos; i++)
        aux[i] = alumnos[i];
    aux[CantAlumnos] = f;

    delete [] alumnos;

    alumnos = aux;
    CantAlumnos++;
    CantCupo--;
    return true;
}

bool Curso::deleteAlumno(Alumno *f)
{
    if(!ExistAlumno(f->getNLegajo())){
        return false;
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
    CantCupo++;
    return true;
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
    std::cout << "ID: " << ID << std:: endl;
    std::cout << "  Nombre: " << Nombre << " / " << "Cupos disponibles: " << CantCupo << std::endl;
    std::cout << "  Cantidad de alumnos: " << CantAlumnos << std::endl;
    std::cout << " Profesor: " << profesor->getNombres() << " " << profesor->getApellido() << std::endl;
}

Curso::~Curso()
{
    if(alumnos != nullptr)
    {
        for(int i = 0; i < CantAlumnos; i++)
            delete alumnos[i];
        delete [] alumnos;
        alumnos = nullptr;
    }

    if(profesor != nullptr)
    {
        delete [] profesor;
        profesor = nullptr;
    }

}



