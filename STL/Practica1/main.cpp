#include <iostream>
#include <map>
#include <numeric>
using namespace std;

double getTotal(double a, pair<string, double> elemento) {
    return a + elemento.second;
}

int main()
{
    string h; double j;
    map<string, double> bienes;
    for(int i=0; i< 5; i++)
    {
        cout << "ingrese key: ";
        getline(cin, h);
        cout << "Ingrese monto: ";
        cin >> j;
        bienes.insert(make_pair(h,j));
        cin.ignore();

    }


    string key = "JKD";
    if(bienes.count(key) > 0)
    {
        cout << bienes[key] << endl;
    } else {
        cout << "No existe. " << endl;
    }

    auto total = accumulate(bienes.begin(), bienes.end(), 0.0, getTotal);
    cout << total << endl;

    return 0;
}
