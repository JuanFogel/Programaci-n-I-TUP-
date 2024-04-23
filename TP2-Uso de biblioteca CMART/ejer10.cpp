#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n, res, cifras;

    cout << "Ingrese un numero entero: " << endl;
    cin >> n;

    res = sqrt(n);
    cifras = log10(n), cifras++;
    res = pow(res, cifras);
    cout << "el resultado es " << res << endl;
}