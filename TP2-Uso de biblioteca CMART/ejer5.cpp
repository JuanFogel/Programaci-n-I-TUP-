#include <iostream>
#include <cmath>
using namespace std;

// Escribir un programa que cuando el usuario ingrese los catetos de un triángulo rectángulo,
// calcule y muestre en consola el valor de la hipotenusa. (Teorema de Pitágoras).

int main()
{

    float res, catmay, catmen, hipo;

    cout << "Ingrese Cateto mayor: " << endl;
    cin >> catmay;

    cout << "Ingrese cateto menor: " << endl;
    cin >> catmen;

    hipo = (pow(catmay, 2) + pow(catmen, 2));
    res = sqrt(hipo);

    cout << "La hipotenusa es: " << res << endl;
}