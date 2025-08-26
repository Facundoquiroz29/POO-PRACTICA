#include <iostream>
#include "pila.cpp"
#include "nodopila.cpp"

using namespace std;

int main()
{
    pila<int>* pilaI = new pila<int>();
    pilaI->agregarDato(65);
    pilaI->agregarDato(32);
    pilaI->agregarDato(62);
    pilaI->agregarDato(65);
    pilaI->agregarDato(23);
    cout << endl;
    cout << pilaI->obtenerDato() << endl;
    cout << pilaI->obtenerDato() << endl;


    return 0;
}
