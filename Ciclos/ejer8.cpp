#include <iostream>
using namespace std;
//  Escribir un programa que calcule la media de una cantidad de números introducidos por
// teclado do-while

int main()
{
    int num, res;
    int cont = 0;
    int acu = 0;

    do
    {
        cout << "Ingrese un numero o 0 para terminar: " << endl;
        cin >> num;
        if (num > 0)
        {
            acu += num;
            cont++;
        }

    } while (num != 0);
    res = acu / cont;
    cout << "La media es : " << res << endl;
    return 0;
}