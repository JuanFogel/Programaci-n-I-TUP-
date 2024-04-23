#include <iostream>
using namespace std;

int main()
{

    int comida, precio;

    cout << "Ingrese el plato que desea comer" << endl;
    cout << "\t 1 Fideos\n";
    cout << "\t 2 Asado\n";
    cout << "\t 3 Pizza\n";
    cin >> comida;

    switch (comida)
    {
    case 1:
        precio = 3459;
        cout << "Fideos\n";
        cout << "el preico del plato es " << precio << endl;
        break;
    case 2:
        precio = 2233;
        cout << "Asado\n";
        cout << "el preico del plato es " << precio << endl;
        break;
    case 3:
        precio = 4500;
        cout << "Pizza\n";
        cout << "el preico del plato es " << precio << endl;
        break;
    default:
        cout << "el valor ingresado no pertenecce aun plato" << endl;
    }
}