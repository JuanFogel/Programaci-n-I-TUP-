#include <iostream>
#include <cmath>
using namespace std;

// Escribir un programa que al ingresar las notas de los 3 parciales del curso, devuelva el
// valor del promedio, el valor del promedio redondeado (“round”) y el valor del promedio
// truncado (“trunc”).

int main()
{
    float a, b, c, res, promredondeado, promtruncado;

    cout << "Ingrese la primer nota: ";
    cin >> a;
    cout << "Ingrese la segunda nota: ";
    cin >> b;
    cout << "Ingrese la tercer nota: ";
    cin >> c;

    res = ((a + b + c) / 3);
    promredondeado = round(res); // Redondeo al entero mas proximo.
    promtruncado = trunc(res);   // Quito la parte decimal.

    cout << "El promedio es: " << res << endl;
    cout << "El promedio truncado es: " << promtruncado << endl;
    cout << "El promedio redondeado es: " << promredondeado << endl;
}