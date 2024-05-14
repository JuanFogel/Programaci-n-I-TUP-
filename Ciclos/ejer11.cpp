#include <iostream>
using namespace std;

// Escribir un programa que solicite al usuario ingresar un número entero positivo y luego
// imprima en la consola una matriz cuadrada con la diagonal principal compuesta por números
// en forma ascendente hasta ese valor y los demás elementos de la matriz iguales a cero. Por
// ejemplo, si el usuario ingresa el número 6, la matriz resultante debe ser la siguiente:

int main()
{
    int lado;

    cout << "Ingrese el lado: " << endl;
    cin >> lado;

    for (int i = 1; i <= lado; i++)
    {
        for (int j = 1; j <= lado; j++)
        {
            if (i == j)
            {
                cout << " " << j << " ";
            }
            else
            {
                cout << " 0 ";
            }
        }
        cout << endl;
    }
}