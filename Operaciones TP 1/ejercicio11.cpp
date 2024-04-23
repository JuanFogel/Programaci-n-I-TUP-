
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;
    double c;

    a = 6;
    b = 9;
    c = 7.5;

    a = b;
    b = c;
    c = a;

    cout << "El valor de A es: " << a << endl;
    cout << "El valor de b es: " << b << endl;
    cout << "El valor de C es: " << c << endl;

    return 0;
}