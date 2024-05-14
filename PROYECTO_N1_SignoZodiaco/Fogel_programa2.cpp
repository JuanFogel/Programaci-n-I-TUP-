#include <iostream>

using namespace std;

int main()
{
    int dia, mes; // Declaramos las variables dia y mes que seran de tipo entero.

    cout << "\t  Ingrese su dia de nacimiento: "; // Mostramos en pantalla "Ingrese dia de nacimiento".
    cin >> dia;                                   // La persona procede a ingresar los valores.
    cout << "\t  Ingrese su mes de nacimiento: ";
    cin >> mes;

    /*Con el switch evaluamos el valor de la variable "mes", que va a ir de 1 a 12 casos, dependiendo el mes de nacimiento..
    Una vez ingresado el mes, se compara el dia dentro de if y retorna el signo.
    En caso que el valor del dia sea incorrecto restorna un cartel para que ingreso los valores adecuados.*/

    switch (mes)
    {
    case 1:
        if (dia >= 1 && dia <= 20)
            cout << "\t  Tu signo zodiacal es Capricornio" << endl;
        else if (dia >= 21 && dia <= 31)
            cout << "\t  Tu signo zodiacal es Acuario" << endl;
        else
            cout << "\t  Dia inexistente, ingrese los valores adecuados." << endl;
        break;
    case 2:
        if (dia >= 1 && dia <= 19)
            cout << "\t  Tu signo zodiacal es Acuario" << endl;
        else if (dia >= 20 && dia <= 29)
            cout << "\t  Tu signo zodiacal es Piscis" << endl;
        else
            cout << "\t  Dia inexistente, ingrese los valores adecuados." << endl;
        break;
    case 3:
        if (dia >= 1 && dia <= 20)
            cout << "\t  Tu signo zodiacal es Piscis" << endl;
        else if (dia >= 21 && dia <= 31)
            cout << "\t  Tu signo zodiacal es Aries" << endl;
        else
            cout << "\t  Dia inexistente, ingrese los valores adecuados." << endl;
        break;
    case 4:
        if (dia >= 1 && dia <= 19)
            cout << "\t  Tu signo zodiacal es Aries" << endl;
        else if (dia >= 20 && dia <= 30)
            cout << "\t  Tu signo zodiacal es Tauro" << endl;
        else
            cout << "\t  Dia inexistente, ingrese los valores adecuados." << endl;
        break;
    case 5:
        if (dia >= 1 && dia <= 20)
            cout << "\t  Tu signo zodiacal es Tauro" << endl;
        else if (dia >= 21 && dia <= 31)
            cout << "\t  Tu signo zodiacal es Geminis" << endl;
        else
            cout << "\t  Dia inexistente, ingrese los valores adecuados." << endl;
        break;
    case 6:
        if (dia >= 1 && dia <= 21)
            cout << "\t  Tu signo zodiacal es Geminis" << endl;
        else if (dia >= 22 && dia <= 30)
            cout << "\t  Tu signo zodiacal es Cáncer" << endl;
        else
            cout << "\t  Dia inexistente, ingrese los valores adecuados." << endl;
        break;
    case 7:
        if (dia >= 1 && dia <= 22)
            cout << "\t  Tu signo zodiacal es Cáncer" << endl;
        else if (dia >= 23 && dia <= 31)
            cout << "\t  Tu signo zodiacal es Leo" << endl;
        else
            cout << "\t  Dia inexistente, ingrese los valores adecuados." << endl;
        break;
    case 8:
        if (dia >= 1 && dia <= 23)
            cout << "\t  Tu signo zodiacal es Leo" << endl;
        else if (dia >= 24 && dia <= 31)
            cout << "\t  Tu signo zodiacal es Virgo" << endl;
        else
            cout << "\t  Dia inexistente, ingrese los valores adecuados." << endl;
        break;
    case 9:
        if (dia >= 1 && dia <= 22)
            cout << "\t  Tu signo zodiacal es Virgo" << endl;
        else if (dia >= 23 && dia <= 30)
            cout << "\t  Tu signo zodiacal es Libra" << endl;
        else
            cout << "\t  Dia inexistente, ingrese los valores adecuados." << endl;
        break;
    case 10:
        if (dia >= 1 && dia <= 22)
            cout << "\t  Tu signo zodiacal es Libra" << endl;
        else if (dia >= 23 && dia <= 31)
            cout << "\t  Tu signo zodiacal es Escorpio" << endl;
        else
            cout << "\t  Dia inexistente, ingrese los valores adecuados." << endl;
        break;
    case 11:
        if (dia >= 1 && dia <= 22)
            cout << "\t  Tu signo zodiacal es Escorpio" << endl;
        else if (dia >= 23 && dia <= 30)
            cout << "\t  Tu signo zodiacal es Sagitario" << endl;
        else
            cout << "\t  Dia inexistente, ingrese los valores adecuados." << endl;
        break;
    case 12:
        if (dia >= 1 && dia <= 21)
            cout << "\t  Tu signo zodiacal es Sagitario" << endl;
        else if (dia >= 22 && dia <= 31)
            cout << "\t  Tu signo zodiacal es Capricornio" << endl;
        else
            cout << "\t  Dia inexistente, ingrese los valores adecuados." << endl;
        break;

    default: // Si ingresa un mes no valido, muestra ne pantalla un cartel.
        cout << "\t  Mes inexistente, ingrese valores adecuados." << endl;
        break;
    }
    return 0;
}
