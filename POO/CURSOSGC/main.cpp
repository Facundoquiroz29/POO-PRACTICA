#include "alumno.h"
#include "profesor.h"
#include "curso.h"

#include <iostream>

using namespace std;

int main()
{
    cout << "---AGENDA---" << endl;
    Alumno* a1 = new Alumno(41722226, "Messi", "Armado Andres","A01");
    Alumno* a2 = new Alumno(41733346, "Loglio", "Ileana Gabriela","A02");
    Alumno* a3 = new Alumno(41711746, "Moya", "Valenina","A03");
    Profesor* p1 = new Profesor(41754346, "Quiroz", "Facundo Daniel","204175434620");

    a1->mostrarInformacion();
    cout << endl;
    a2->mostrarInformacion();
    cout << endl;
    a3->mostrarInformacion();
    cout << endl;
    p1->mostrarInformacion();
    cout << endl;

    //CREAR CURSO
    cout << endl;
    Curso* FCYT = new Curso(73649503, "Reparacion y matenimiento de PC", 3);
    FCYT->setProfesor(p1);
    FCYT->addAlumnos(a1);
    FCYT->addAlumnos(a2);
    FCYT->addAlumnos(a3);
    cout << endl;
    FCYT->mostrarInformacion();
    cout << endl;
    cout << endl;
    cout << "Datos del alumno: " << endl;
    for(int i = 0; i< FCYT->getCantAlumnos(); i++)
    {
        FCYT->getAlumnos()[i]->mostrarInformacion();
    }


    cout << endl;
    cout << "ELIMINAMOS UN ALUMNO" << endl;
    FCYT->deleteAlumno(a2);
    FCYT->deleteAlumno(a3);

    cout << endl;
    FCYT->mostrarInformacion();
    cout << "Datos del alumno: " << endl;
    for(int i = 0; i< FCYT->getCantAlumnos(); i++)
    {
        FCYT->getAlumnos()[i]->mostrarInformacion();
    }

    return 0;
}
