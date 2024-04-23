#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    const int a = 2;
    int vi = 0;
    int t, vf, d;

    cout << "Ingrese el valor de tiempo en segundos: " << endl;
    cin >> t;

    vf = vi + a * t;
    d = (vi * t) + (0.5 * a * pow(t, 2));

    cout << "la velocidad inicial es : " << vf << "ms" << endl;
    cout << "la distancia es : " << d << "mts" << endl;

    return 0;
}