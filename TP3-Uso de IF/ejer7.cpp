#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    bool promedio = true;

    cout << "Ingrese la primer nota: " << endl;
    cin >> a;

    cout << "Ingrese la segunda nota: " << endl;
    cin >> b;
    cout << "Ingrese la tercera nota: " << endl;
    cin >> c;

    // promedio = (a + b + c) / 3;
    // cout << "El promedio es: " << promedio << endl;
    if (promedio > 6)
        cout << "Estas aprobado" << endl;
    else
        cout << "Estas desaprobado bro" << endl;
}