#include "pila.cpp"
#include "nodo.cpp"
#include <iostream>
using namespace std;

void menu1(Pila<int>* pila)
{
    int x;
    cout << "Ingrese dato: ";
    cin >> x;
    pila->addData(x);
    cout << endl;
}

void menu2(Pila<int>* pila){
    if(pila->emptyStack()){
        cout << "La pila esta vacia!!. " << endl;
        return;
    }
    int h = pila->obtainData();
    cout << "Dato obtenido: " << h << endl;
    cout << endl;
}

int main()
{
    Pila<int>* pila = new Pila<int>();
    int j = 100;
    while(j != 0){
        cout << "------------PILA------------" << endl;
        cout << "   1-Agregar dato. " << endl;
        cout << "   2-obtener dato. " << endl;
        cout << "   0- salir " << endl;
        cout << "----------------------------" << endl;
        cin >> j;
        cout << endl;
        switch (j) {
        case 1: menu1(pila);
            break;
        case 2: menu2(pila);
            break;
        }
    }
    delete pila;
    return 0;
}
