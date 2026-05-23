#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Ejemplo Switch C++" << endl;
    cout << "Ingresa un numero del 1 al 5: ";
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "Ingresaste el numero 1" << endl;
        break;
    case 2:
        cout << "Ingresaste el numero 2" << endl;
        break;
    case 3:
        cout << "Ingresaste el numero 3" << endl;
        break;
    case 4:
        cout << "Ingresaste el numero 4" << endl;
        break;
    case 5:
        cout << "Ingresaste el numero 5" << endl;
        break;
    default:
        cout << "Ingresaste un numero fuera del rango" << endl;
        break;
    }

    return 0;
}