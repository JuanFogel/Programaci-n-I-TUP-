#include <iostream>
#include <string>

using namespace std;

int main()
{

    string primDes, segDes, orig;

    primDes = "Mar del Plata";
    cout << "El primer destino ingresado es: " << primDes << endl;
    segDes = "Bariloche";
    cout << "El segundo destino ingresado es: " << segDes << endl;

    cout << "DATOS ERRONES CORREGIR!" << endl;

    orig = primDes;
    primDes = segDes;
    segDes = orig;

    cout << "El primer destino es: " << primDes << endl;
    cout << "El primer destino es: " << segDes << endl;

    cout << "LOS DATOS SON CORRECTOS!" << endl;

    return 0;
}