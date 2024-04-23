#include <iostream>
using namespace std;

int main()
{
    int dia, mes, diaAnio;

    cout << "Ingrese el dia: " << endl;
    cin >> dia;
    cout << "Ingrese el mes: " << endl;
    cin >> mes;

        switch (mes)
        {
        case 1:
            diaAnio = dia;
            cout << "El dia del anio es: " << diaAnio << endl;
            break;
        case 2:
            diaAnio = 31 + dia;
            cout << "El dia del anio es: " << diaAnio << endl;
            break;
        case 3:
            diaAnio = 59 + dia;
            cout << "El dia del anio es: " << diaAnio << endl;
            break;
        case 4:
            diaAnio = 90 + dia;
            cout << "El dia del anio es: " << diaAnio << endl;
            break;
        case 5:
            diaAnio = 120 + dia;
            cout << "El dia del anio es: " << diaAnio << endl;
            break;
        case 6:
            diaAnio = 151 + dia;
            cout << "El dia del anio es: " << diaAnio << endl;
            break;
        case 7:
            diaAnio = 181 + dia;
            cout << "El dia del anio es: " << diaAnio << endl;
            break;
        case 8:
            diaAnio = 212 + dia;
            cout << "El dia del anio es: " << diaAnio << endl;
            break;
        case 9:
            diaAnio = 243 + dia;
            cout << "El dia del anio es: " << diaAnio << endl;
            break;
        case 10:
            diaAnio = 273 + dia;
            cout << "El dia del anio es: " << diaAnio << endl;
            break;
        case 11:
            diaAnio = 304 + dia;
            cout << "El dia del anio es: " << diaAnio << endl;
            break;
        case 12:
            diaAnio = 334 + dia;
            cout << "El dia del anio es: " << diaAnio << endl;
            break;
            default:
            cout << "No pertenece a un mes" <<endl;
        }
        
}
