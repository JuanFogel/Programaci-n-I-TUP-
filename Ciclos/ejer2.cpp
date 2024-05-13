#include <iostream>

using namespace std;

int main()
{
    // Escribir un programa que pida al usuario un número y muestre su tabla de multiplicar utilizando un bucle for.

    int n;
    cout << "Ingrese un numero: " << endl;
    cin >> n;

    for (size_t i = 0; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}