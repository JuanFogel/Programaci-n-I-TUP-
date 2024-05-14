#include <iostream>
using namespace std;
// Escribir un programa que pida al usuario un número y determine si es primo o no utilizando
// un bucle while.

int main()
{
    int num, cont = 2;
    bool primo = true;

    cout << "Ingrese un numero: " << endl;
    cin >> num;
    while (primo == true && cont < num)
    {
        if (num % cont == 0)
        {
            primo = false;
        }
        else
        {
            cont++;
        }
    }

    if (primo == true)
    {
        cout << "Es primo" << endl;
    }
    else
    {
        cout << "No es primo     " << endl;
    }
    return 0;
}