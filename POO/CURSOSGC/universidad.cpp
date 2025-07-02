#include "universidad.h"
#include <cstring>
#include <iostream>


Universidad::Universidad() {}

Universidad::Universidad(char *nameUniversity, int lim)
{
    this->nameUniversity = new char[strlen(nameUniversity)];
    strcpy(this->nameUniversity, nameUniversity);

    this->lim = lim;
}

void Universidad::addcurso(Curso f)
{
    if(!AdmitenCursos())
    {
        std::cout << "No se admiten mas cursos. " <<std::endl;
        return;
    } else {
        Curso* aux = new Curso[cant+1];
        for(int i=0; i<cant; i++)
            aux[i] = cursos[i];
        aux[cant] = f;
        delete [] cursos;
        cursos = aux;
        cant++;
        std::cout << "Curso agregado. " << std::endl;
    }
}

bool Universidad::AdmitenCursos()
{
    return cant < lim;
}
