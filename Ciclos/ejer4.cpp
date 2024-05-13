#include <iostream>

using namespace std;

// Escribir un programa que pida al usuario un número y muestre sus divisores utilizando un
// bucle for.

int main()
{
    int n;
    cout << "Ingrese un numero: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << n << " Si es divisible por: " << i << endl;
        else
            cout << n << " No es divisible por: " << i << endl;
    }
    return 0;
}