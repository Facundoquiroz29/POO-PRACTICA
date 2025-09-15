#include <cstring>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//guardar en un struct
struct tweet
{
    int nro;
    char txt[140];
};

int main()
{    
    ifstream archTXT("oraciones.txt");
    ofstream archBIN("salida.dat", ios::binary);

    string line;
    tweet t;
    t.nro = 0;

    while(getline(archTXT,line)) //Buscar dif eof, getline
    {
        strcpy(t.txt, line.c_str());
        archBIN.write((char*)&t, sizeof(tweet));
        t.nro++;
    }


    return 0;
}
