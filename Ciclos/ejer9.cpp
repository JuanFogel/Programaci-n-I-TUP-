#include <iostream>
using namespace std;

// Escribir un programa que al ingresar el lado de un cuadrado dibuje en consola un cuadrado
// con el carácter “*”. Por ejemplo, al ingresar lado = 4, el dibujo debe quedar de la siguiente
// manera.

int main()
{

    int lado;
    cout << "Ingrese el lado: " << endl;
    cin >> lado;

    for (int i = 1; i <= lado; i++)
    {
        for (int j = 1; j <= lado; j++)
        {
            cout << "  *  ";
        }
        cout << endl;
    }
    return 0;
}