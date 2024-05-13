#include <iostream>

using namespace std;

int main()
{
    // Escribir un programa que calcule la suma de los primeros n números naturales utilizando un
    // bucle while.
    int a;
    int cont = 1;

    cout << "Ingrese un numero: " << endl;
    cin >> a;

    while (cont <= 20)
    {
        cout << a << "+" << cont << "=" << a + cont << endl;
        cont++;
    }
    return 0;
}