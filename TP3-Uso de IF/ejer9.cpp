#include <iostream>
using namespace std;

int main()
{

    int salario, clase;

    // cout << "Ingrese salario:" << endl;
    // cin >> salario;

    // if (salario > 0 && salario <= 60000)
    //     salario = (salario * 120) / 100;
    // else if (salario >= 60000 && salario <= 100000)
    //     salario = (salario * 110) / 100;
    // else if (salario >= 100000 && salario <= 150000)
    //     salario = (salario * 105) / 100;
    // else
    //     salario = (salario * 103) / 100;

    // cout << "El salario es" << salario << endl;

    cout << "Ingrese 1 si tu salario esta entre 0-60000" << endl;
    cout << "Ingrese 2 si tu salario esta entre 60000-100000:" << endl;
    cout << "Ingrese 3 si tu salario esta entre 100000-150000:" << endl;
    cout << "Ingrese 4 si tu salario es mas de 150000" << endl;
    cin >> clase;

    cout << "Ingrese el monto de su salario: " << endl;
    cin >> salario;

    switch (clase)
    {
    case 1:
        salario = (salario * 120) / 100;
        break;
    case 2:
        salario = (salario * 110) / 100;
        break;
    case 3:
        salario = (salario * 105) / 100;
        break;
    case 4:
        salario = (salario * 103) / 100;
        break;
    default:
        cout << "Salario no valido" << endl;
    }

    cout << "El salario nuevo del trabajador es: " << salario << "$" << endl;
}