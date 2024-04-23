#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n_zapatos;
    float tot_compra;
    const int precio_unidad = 8000;

    cout << "Ingrese la cantidad de zapatos que desea comprar: " << endl;
    cin >> n_zapatos;

    if (n_zapatos > 30)
        tot_compra = (n_zapatos * precio_unidad) - 0.60;
    else if (n_zapatos > 20)
        tot_compra = (n_zapatos * precio_unidad) - 0.80;
    else if (n_zapatos > 10)
        tot_compra = (n_zapatos * precio_unidad) - 0.90;
    else
        tot_compra = n_zapatos * precio_unidad;
    cout << "No tiene descuentos" << endl;

    cout << "El total es: " << tot_compra << endl;
    return 0;
}