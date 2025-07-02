#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H

#include "curso.h"
class Universidad
{
    char* nameUniversity;
    int lim;
    Curso* cursos = nullptr;
    int cant = 0;
public:
    Universidad();
    Universidad(char* nameUniversity, int lim);
    void addcurso(Curso f);
    bool AdmitenCursos();
};

#endif // UNIVERSIDAD_H
