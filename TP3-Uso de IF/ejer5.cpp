#include <iostream>
using namespace std;

int main()
{

    int sueldo_sem, hs_trab;
    const int precio_hs = 1000;
    const int precio_hsExt = 2000;

    cout << "Ingrese la cantidad de horas extras: " << endl;
    cin >> hs_trab;

    if (hs_trab <= 40)
        sueldo_sem = hs_trab * precio_hs;
    else
        sueldo_sem = hs_trab * precio_hsExt;

    cout << "El seldo semanal sera de: " << sueldo_sem << endl;

    return 0;
}