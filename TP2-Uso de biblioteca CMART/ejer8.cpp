#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float x, x_dos, y, y_dos, distancia;

    cout << "Ingrese la coordenada x: " << endl;
    cin >> x_dos;
    cout << "Ingrese la coordenada y: " << endl;
    cin >> y_dos;
    cout << "Ingrese la coordenada x: " << endl;
    cin >> x;
    cout << "Ingrese la coordenada y: " << endl;
    cin >> y;

    distancia = sqrt(pow(x_dos - x, 2) + pow(y_dos - y, 2));

    cout << "la distancia es: " << distancia << endl;
}