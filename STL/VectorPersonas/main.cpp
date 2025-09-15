#include <iostream>
#include <vector>
#include "personas.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    vector<Personas>* persons = new vector<Personas>();
    vector<Personas> personas;
    Personas persona1("Martin", 11111111);
    Personas persona2("Gimena", 22222222);
    Personas persona3("Joaquin", 33333333);
    Personas persona4("Esteban", 44444444);
    Personas persona5("Matias", 55555555);
    persons->push_back(persona1);
    persons->push_back(persona2);
    persons->push_back(persona3);
    persons->push_back(persona4);
    persons->push_back(persona5);

    personas.push_back(persona1);

    for(int i = 0; i <  persons->size(); i++)
    {
        cout << "Nombre: " << (*persons)[i].getNombre() << "; DNI: " << (*persons)[i].getDni() << endl;
    }
    cout << endl;
    cout << "Nombre: " << personas[0].getNombre() << "; DNI: " << personas[0].getDni() << endl;
    return 0;
}
