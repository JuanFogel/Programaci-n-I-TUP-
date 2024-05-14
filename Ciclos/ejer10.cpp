#include <iostream>
using namespace std;

// Misma consigna que el ejercicio anterior pero ahora dejando los espacios del medio sin llenar.
// Por ejemplo, al ingresar lado = 4, el dibujo debe quedar de la siguiente manera.

int main()
{

    int lado;

    cout << "Ingrese el lado: " << endl;
    cin >> lado;

    for (int i = 1; i <= lado; i++)
    {
        for (int j = 1; j <= lado; j++)
        {
            if ((i == 1) || (j == 1) || (i == lado) || (j == lado))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}