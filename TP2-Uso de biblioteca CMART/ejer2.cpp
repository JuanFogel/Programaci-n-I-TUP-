#include <iostream>
#include <cmath>
using namespace std;

// Escribir un programa que realice la conversión de grados a radianes.

int main()
{
    float n, radian;
    const double Pi = 3.141592;

    cout << "Ingrese los grados: " << endl;
    cin >> n;

    radian = (n * Pi / 180);
    cout << "El resultado es " << radian << " radianes" << endl;
}