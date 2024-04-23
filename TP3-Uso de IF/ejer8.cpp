#include <iostream>
using namespace std;

int main()
{
    int dia, mes, diaAnio;

    cout << "Ingrese el dia: " << endl;
    cin >> dia;
    cout << "Ingrese el mes: " << endl;
    cin >> mes;

    if (mes >= 1 && mes <= 12)
        switch (mes)
        {
        case 1:
            diaAnio = dia;
            break;
        case 2:
            diaAnio = 31 + dia;
            break;
        case 3:
            diaAnio = 59 + dia;
            break;
        case 4:
            diaAnio = 90 + dia;
            break;
        case 5:
            diaAnio = 120 + dia;
            break;
        case 6:
            diaAnio = 151 + dia;
            break;
        case 7:
            diaAnio = 181 + dia;
            break;
        case 8:
            diaAnio = 212 + dia;
            break;
        case 9:
            diaAnio = 243 + dia;
            break;
        case 10:
            diaAnio = 273 + dia;
            break;
        case 11:
            diaAnio = 304 + dia;
            break;
        case 12:
            diaAnio = 334 + dia;
            break;
        }
    else
        cout << "El mes ingresado no coincide..." << endl;

    cout << "El dia del anio es: " << diaAnio << endl;
}
