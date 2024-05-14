#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int dia, mes; // Declaramos las variables dia & mes.
    int invitados, total_invitados;
    string respuesta; // Declaramos un string respuesta que contendra el "si" o "no".

    cout << "\t  Ingrese su dia de nacimiento: "; // Mostramos en pantalla para que ingrese el dia..
    cin >> dia;                                   // El usuario ingresa el dia..
    cout << "\t  Ingrese su mes de nacimiento: ";
    cin >> mes;

    // Comparamos si el dia se encuentra entra los valores correctos y el mes es el ingresado.

    if (dia >= 21 && dia <= 31 && mes == 1 || dia <= 19 && mes == 2)
        cout << "\t  Tu signo del zodiaco es: Acuario. " << endl;
    else if (dia >= 20 && dia <= 28 && mes == 2 || dia <= 20 && mes == 3)
        cout << "\t  Tu signo del zodiaco es: Piscis. " << endl;
    else if (dia >= 21 && dia <= 31 && mes == 3 || dia <= 19 && mes == 4)
        cout << "\t  Tu signo del zodiaco es: Aries. " << endl;
    else if (dia >= 20 && dia <= 30 && mes == 4 || dia <= 20 && mes == 5)
        cout << "\t  Tu signo del zodiaco es: Tauro. " << endl;
    else if (dia >= 21 && dia <= 31 && mes == 5 || dia <= 21 && mes == 6)
        cout << "\t  Tu signo del zodiaco es: Geminis. " << endl;
    else if (dia >= 22 && dia <= 30 && mes == 6 || dia <= 22 && mes == 7)
        cout << "\t  Tu signo del zodiaco es: Canceer. " << endl;
    else if (dia >= 23 && dia <= 31 && mes == 7 || dia <= 23 && mes == 8)
        cout << "\t  Tu signo del zodiaco es: Leo. " << endl;
    else if (dia >= 24 && dia <= 31 && mes == 8 || dia <= 22 && mes == 9)
        cout << "\t  Tu signo del zodiaco es: Virgo. " << endl;
    else if (dia >= 23 && dia <= 30 && mes == 9 || dia <= 22 && mes == 10)
        cout << "\t  Tu signo del zodiaco es: Libra. " << endl;
    else if (dia >= 23 && dia <= 31 && mes == 10 || dia <= 22 && mes == 11)
        cout << "\t  Tu signo del zodiaco es: Escorpio. " << endl;
    else if (dia >= 23 && dia <= 30 && mes == 11 || dia <= 21 && mes == 12)
        cout << "\t  Tu signo del zodiaco es: Sagitario. " << endl;
    else if (dia >= 22 && dia <= 31 && mes == 12 || dia <= 20 && mes == 1)
        cout << "\t  Tu signo del zodiaco es: Capricornio. " << endl;
    else
        cout << "\t  Ingrese valores correctos. " << endl;

    /*Preguntamos si le gusta festajar su compleaños y verifcamos si la respuesta es si o no..
    De ser correcto ingresa en el if y realiza dicho preceso asignado, en este caso pide un entero de la cantidad de invitados,
    a ese numero lo eleva al cubo y busca su raiz cuadrada.. Redondeando el resultado sin decimales..*/

    cout << "\t  Te gusta festejar tu cumpleanios? => (Si / No) <= " << endl;
    cin >> respuesta;

    if (respuesta == "Si" || respuesta == "si" || respuesta == "SI" || respuesta == "sI")
    {
        cout << "\t  Que bueno!. " << endl;
        cout << "\t  Ingresa la cantidad de invitados: " << endl;
        cin >> invitados;
        total_invitados = sqrt(pow(invitados, 4));
        cout << "\t  El total de invitados es: " << round(total_invitados) << endl;
    }
    // Si el retorno de la variable es no, devuelve dicha respuesta:
    else if (respuesta == "No" || respuesta == "no" || respuesta == "NO" || respuesta == "nO")
        cout << "\t  Que lastima." << endl;
    // Y si se ingresa algun caracter no especificado devuelve dicaha respuesta..
    else
        cout << "\t  Vuelva a intentar, solo esta permitido ---> 'Si' o 'No'" << endl;

    return 0;
}
