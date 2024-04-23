#include <iostream>
using namespace std;

int main()
{

    int num_a, num_b, rta;
    char operacion;
    cout << "Ingrese los numeros: " << endl;
    cin >> num_a >> num_b;

    if (num_a > 0 && num_b > 0)
    {
        cout << "Ingrese a si quiere sumar" << endl;
        cout << "Ingrese b si quiere restar" << endl;
        cout << "Ingrese c si quiere dividir" << endl;
        cout << "Ingrese d si quiere multiplicar" << endl;
        cin >> operacion;

        switch (operacion)
        {
        case 'a':
            rta = (num_a + num_b);
            break;
        case 'b':
            rta = (num_a - num_b);
            break;
        case 'c':
            rta = (num_a / num_b);
            break;
        case 'd':
            rta = (num_a * num_b);
            break;
        default:
            cout << "Ingresaste una letra invalida" << endl;
        }
    }
    cout << "El resultado es;" << rta << endl;
}