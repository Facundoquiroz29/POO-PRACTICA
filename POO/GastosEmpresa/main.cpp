#include <iostream>
#include "gestora.h"
#include "compra.h"
using namespace std;

int main()
{
    gestora empresa;
    empresa.addcompra("Facturas",233.34);
    empresa.mostrarCompras();



    return 0;
}
