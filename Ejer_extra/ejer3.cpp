#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

// Escriba un programa que solicite al usuario un número entero, y muestre en pantalla si es par
// o impar. Si es par mostrar en consola la cantidad de cifras que tiene el número ingresado y si
// es impar mostrar en consola la primera cifra del número ingresado.

int main()
{
    int res, a;

    cout << "\t Ingrese un numero:" << endl;
    cin >> a;
    // si el numero par devuelve la cantidad de cifras del num,
    if (a % 2 == 0)
    {
        cout << "\t El numero es par" << endl;
        res = trunc(log10(a)) + 1;
        cout << "\t La cantidad de cifras es: " << setw(res) << endl;
    }
    // si es impar devuelve el primer cifra del num.
    else
    {
       cout << "\t El numero es impar " << a << endl;  
       int logbase = log10(a);                         //string num = std(a);
        int potencia = pow(10, logbase);            //char primer_cifra = num[0];*/
        int primer_cifra = a / potencia;
        cout << "\t La cifra del primer numero es: " << primer_cifra<< endl;
    }
    return 0;

}
