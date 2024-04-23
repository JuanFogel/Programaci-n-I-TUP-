#include <iostream>
using namespace std;

int main()
{
    char membresia;

    cout << "Ingrese su membresia: " << endl;
    cin >> membresia;

    if (membresia == 'a' || membresia == 'b' || membresia == 'c')
        if (membresia == 'a')
            cout << "tenes un descuento del 10%";
        else if (membresia == 'b')
            cout << "tenes un descuento del 15%";
        else
            cout << "tenes un descuento del 20%";

    else
        cout << "No tenes descuentos pa";
}