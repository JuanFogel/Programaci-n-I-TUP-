#include <iostream>
#include <string>

using namespace std;

// Escribir un programa que pida al usuario una palabra y muestre sus letras una por una
// utilizando un bucle while.

int main()
{
    string palabra;
    int i = 1;

    cout << "Ingrese una palabra: " << endl;
    cin >> palabra;

    while (i < palabra.length())
    {
        cout << "La letra en la posicion " << i << " es :" << palabra[i - 1] << endl;
        i++;
    }
    cout << "La letra en la posicion " << i << " es :" << palabra[i - 1] << endl;
}