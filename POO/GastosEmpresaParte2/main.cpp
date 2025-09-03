#include <iostream>
#include "gestora.h"
#include "compra.h"
using namespace std;

int main()
{
    gestora empresa;
    empresa.addcompra('a',"Trapos",2353.34);
    empresa.addcompra('b',"Internet",283.34);
    empresa.addcompra('c',"Medialunas",293.34);
    empresa.addcompra('a',"Jabon",263.34);
    empresa.addcompra('b',"Enersa",283.34);
    empresa.addcompra('c',"Bizcochos",223.34);
    empresa.addcompra('a',"Shapoo",213.34);

    empresa.mostrarCompras();

    empresa.calcularMontos();
    empresa.mostrarTotal();
    compra f('a',"Shapoo",213.34);

    bool g = empresa.comprasiguales(f);
    cout << endl;
    cout << g << endl;

    return 0;
}
