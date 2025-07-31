#include <iostream>
using namespace std;

template <typename T>
T maximo(T a, T b) {
    return (a > b) ? a : b;
}

int main()
{
    cout << maximo(3,7) << endl;
    cout << maximo(3.5, 2.1) << endl;
    cout << maximo('a', 'z');
    cout << endl;
    return 0;
}
