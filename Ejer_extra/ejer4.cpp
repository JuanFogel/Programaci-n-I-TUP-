#include <iostream>
#include <cmath>
using namespace std;

// /--Escriba un programa que solicite al usuario dos números enteros entre 1 y 10, y muestre en
// pantalla el resultado de la división entre el primero y el segundo si ambos números son pares.
// Si alguno de los números es impar, el programa debe mostrar el resultado del número mayor
// elevado al menor. Si alguno de los números no está en el rango especificado debe mostrar un
// mensaje de error.
// Tener en cuenta que la división puede dar valores decimales.

int main()
{

    int a, b, res;

    cout << "Ingrese el primer numero" << endl;
    cin >> a;
    cout << "Ingrese el segundo numero" << endl;
    cin >> b;

    if (a >= 1 && a <= 10 && b >= 1 && b <= 10)
    {

        if (a % 2 == 0 && b % 2 == 0)
        {
            res = a / b;
            cout << "El resultado es: " << res << endl;
        }
        else if (a > b)
        {
            res = pow(a, b);
            cout << "El resultado del primer numero elevado al segundo es: " << res << endl;
        }
        else
        {
            res = pow(b, a);
            cout << "El resultado del segundo numero elevado al primero es: : " << res << endl;
        }
    }
    else
    {
        cout << "ERROR" << endl;
    }
}