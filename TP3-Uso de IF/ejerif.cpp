#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int a, b, c;

    cout << "Ingrese n1: " << endl;
    cin >> a;
    cout << "Ingrese n2: " << endl;
    cin >> b;
    cout << "Ingrese n3: " << endl;
    cin >> c;

    if (!a > b && b > c)
        cout << "el tercer numero es mayor " << endl;
    else if (a > c)
        cout << "el primer numero es mayor" << endl;

    else
        cout << "el segundo numero es el mayor" << endl;

    return 0;
}