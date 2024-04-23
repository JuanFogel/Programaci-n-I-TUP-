#include <iostream>
#include <cmath>
using namespace std;

// Escribir un programa que calcule el perímetro y el área de un círculo, dependiendo del
// radio que ingrese el usuario.

int main()
{

    const double pi = 3.141592;
    float radio, perimetro, area;

    cout << "Ingrese el radio: ";
    cin >> radio;

    perimetro = 2 * pi * radio;
    area = pi * pow(radio, 2);

    cout << "El perimetro es: " << perimetro << endl;
    cout << "El area es: " << area << endl;
}
