#include <iostream>
using namespace std;

int main()
{

    int a, b;
    int vacio;

    cout << "Ingrese el primer numero\n";
    cin >> a;
    cout << "Ingrese el segundo numero\n";
    cin >> b;

    if (a > b)
    {
        vacio = a;
        a = b;
        b = vacio;
    }
    else
        cout << "El primer numero no es mayor..." << endl;

    cout << "El valor del primer numero es: " << a << endl;
    cout << "El valor del segundo numero es: " << b << endl;
}
