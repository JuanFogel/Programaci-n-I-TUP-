#include <iostream>
#include <cmath>
using namespace std;

// Escribir un programa que calcule la raíz cuadrada de un número.

int main()
{
    int n;
    float res;

    cout << "Ingrese un numero: " << endl;
    cin >> n;

    if (n < 0)
    {
        cout << "Ingrese solo numeros positivos" << endl;
    }

    res = sqrt(n);
    cout << "El resultado es: " << res << endl;
}
