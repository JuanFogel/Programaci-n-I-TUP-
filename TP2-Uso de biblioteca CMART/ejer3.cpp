#include <iostream>
#include <cmath>
using namespace std;

// Calcular el valor del coseno, seno y tangente de un ángulo (entero) en grados, ingresado
// por el usuario.

int main()
{
    int n;
    const double Pi = 3.141592;
    double radian;

    cout << "Ingrese los grados: " << endl;
    cin >> n;

    radian = n * M_PI / 180; // seno, coseno y tang no se ponen como variables ..

    // coseno = cos(n);
    // seno = sin(n);
    // tangente = tan(n);

    cout << "el resultado es: " << radian << " radianes" << endl;
    // cout << "Su coseno es: " << coseno << " Su seno es: " << seno << "Su tangente es: " << tangente << endl;
    cout << "Su coseno es: " << cos(n) << endl;
    cout << "Su seno es: " << sin(n) << endl;
    cout << "Su tangente es: " << tan(n) << endl;
}