#include <iostream>
#include "cola.cpp"
#include "nodo.cpp"

using namespace std;

int main()
{
    cola<int>* colaLineal = new cola<int>();
    colaLineal->agregarDato(45);
    colaLineal->agregarDato(44);
    colaLineal->agregarDato(87);
    colaLineal->agregarDato(9);
    colaLineal->agregarDato(4);
    colaLineal->agregarDato(5);
    colaLineal->agregarDato(50);
    cout << colaLineal->obtenerDato() << endl;
    cout << colaLineal->obtenerDato() << endl;
    cout << colaLineal->obtenerDato() << endl;
    cout << colaLineal->obtenerDato() << endl;
    cout << colaLineal->obtenerDato() << endl;
    cout << colaLineal->obtenerDato() << endl;
    cout << colaLineal->obtenerDato() << endl;
    cout << colaLineal->obtenerDato() << endl;


    return 0;
}
