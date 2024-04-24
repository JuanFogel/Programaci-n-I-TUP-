#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int angulo;
    float ang_radianes, vueltas, cuadrante;

    cout << "\t Ingrese el valor del angulo: " << endl;
    cin >> angulo;

    ang_radianes = angulo * M_PI / 180;
    cout << "\t El angulo en radianes es: " << ang_radianes << " radianes" << endl;

    // Pregunto si el angulo es + a 360, si es asi ingresa al if
    if (angulo > 360)
    {
        vueltas = angulo / 360; // Guardo las vueltas
        cout << "\t Dio un total de: " << vueltas << " vueltas" << endl;

        cuadrante = (angulo % 360); // Guardo el resto que seria el valor del angulo en la primera vuelta
        // Otra forma de resolverlo: cuadrante = (angulo /90) % 4 +1; al angulo lo dividimos x 90 que es 1/4 de 360.. y el resto de dividorlo por 4 +1
        cout << "\t El angulo en la primera vuelta es: " << cuadrante << " grados" << endl;

        if (cuadrante < 90) // Pregunto si el resto es -90 o -180 para que ingrese en caso que sea Verdadero y muestre en que cuadrante se encuentra
            cout << "\t Se encuentra en el cuadrante UNO " << endl;
        else if (cuadrante < 180)
            cout << "\t Se encuentra en el cuadrante DOS " << endl;
        else if (cuadrante < 270)
            cout << "\t Se encuentra en el cuadrante TRES " << endl;
        else
            cout << "\t Se encuentra en el cuadrante CUATRO  " << endl;
    }
    else // Si el angulo es menor a 360 calculo el sen, cos, tang...
    {
        cout << "\t Su coseno es: " << cos(ang_radianes) << endl;
        cout << "\t Su seno es: " << sin(ang_radianes) << endl;
        cout << "\t Su tangente es: " << tan(ang_radianes) << endl;
    }

    return 0;
}

// Un ángulo de 750º = 2 · 360º + 30º, si lo reperesentamos coincide con un ángulo de 30º.

// Si queremos pasar un ángulo a la primera vuelta, dividimos el ángulo entre 360º:

// El cociente es el número de vueltas que da.

// El resto es ángulo resultante que corresponde a la primera vuelta.