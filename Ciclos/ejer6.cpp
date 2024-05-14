#include <iostream>
#include <string>

using namespace std;

// Escribir un programa que calcule el factorial de un número utilizando un bucle for.

int main()
{
    int num, factorial = 1;
    cout << "Ingrese un numero: " << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    cout << "El factorial es " << factorial << endl;
    return 0;
}