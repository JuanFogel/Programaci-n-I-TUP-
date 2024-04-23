#include <iostream>
using namespace std;

int main()
{

    int dia;

    cout << "Ingrese un numero del 1 al 7 correspondiente al dia de la semana" << endl;
    cin >> dia;

    switch (dia)
    {

    case 1:
        cout << "Lunes";
        break;
    case 2:
        cout << "Martes";
        break;
    case 3:
        cout << "Miercoles";
        break;
    case 4:
        cout << "Jueves";
        break;
    case 5:
        cout << "Viernes";
        break;
    case 6:
        cout << "Sabado";
        break;
    case 7:
        cout << "Domingo";
        break;
    default:

        cout << "La opcion ingresada es invalida";
    }
}