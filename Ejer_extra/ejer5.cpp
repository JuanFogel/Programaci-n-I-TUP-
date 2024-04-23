#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int dia, mes, anio, mes_viaje;
    string nombre;

    cout << "\t Ingrese su nombre: " << endl;
    getline(cin, nombre);
    cout << "\t Ingrese su dia de nacimiento: " << endl;
    cin >> dia;
    cout << "\t Ingrese su mes de nacimiento: " << endl;
    cin >> mes;
    cout << "\t Ingrese su anio de nacimiento: " << endl;
    cin >> anio;

    int num_letras = nombre.length();

    cout << "\t la cant de letras es " << num_letras << endl;

    if (num_letras > 12)
    {
      mes_viaje = num_letras / 10 + num_letras % 10;
      cout << "\t La suma de las cifras tu nombre es: " << mes_viaje << endl;
    }
    else
    {
        mes_viaje = num_letras;
    }
    
    int dia_viaje = (dia*mes)/anio;

    if (dia_viaje > 31){
    dia_viaje = 3;
    } 
    else
    cout << "Tu dia de viaje es: " << dia_viaje << " del mes " << mes_viaje << endl;
   
}
