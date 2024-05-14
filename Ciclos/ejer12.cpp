#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Escribir un programa que genere un número aleatorio entre 1 y 100, y le pida al usuario que
// adivine el número. El programa debe indicar si el número ingresado por el usuario es mayor
// o menor que el número generado, y permitir que el usuario ingrese otro número. El programa
// debe seguir solicitando que el usuario ingrese un número hasta que adivine el número
// correcto. Una vez que el usuario adivine el número, el programa debe mostrar cuántos intentos
// le llevó al usuario adivinarlo.

int main()
{
    int numeroAdivinar, numeroIngresado, intentos = 0;
    srand(time(NULL));
    numeroAdivinar = rand() % 100 + 1;

    do
    {
        cout << "Ingrese un numero: " << endl;
        cin >> numeroIngresado;
        intentos++;

        if (numeroIngresado > numeroAdivinar)
        {
            cout << "El numero ingresado es mayor" << endl;
        }
        else if (numeroIngresado < numeroAdivinar)
        {
            cout << "El numero ingresado es menor" << endl;
        }
        else
        {
            cout << "Adivinaste!!" << endl;
        }

    } while (numeroAdivinar != numeroIngresado);

    cout << "La cantidad de intentos fue: " << intentos << endl;

    return 0;
}