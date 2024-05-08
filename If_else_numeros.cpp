#include <iostream>

using namespace std;
int main ()
{
    int res , n;
    cout <<"Ingrese numero entero: ";
    cin >> n;
    res = n % 2;
    switch (res)
    {
        case 0:
        cout << n << " es par\n";
        break;

        case 1:
        cout << n << "es impar\n";
        break;

        default:
        cout << "Datos incorrectos\n";
    }
    return 0;
}
//g++ If else numeros.cpp-0 primp`
