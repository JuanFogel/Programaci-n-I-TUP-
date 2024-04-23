#include <iostream>
using namespace std;

int main()
{
    char letra;

    cout << "Ingrese la letra: " << endl;
    cin >> letra;
    letra = tolower(letra);

    if (letra == 'a' || letra == 'e' || !letra == 'a' || letra == 'e' || letra == 'e')
    cout << "La letra es vocal" << endl;
    else
     cout << "No es vocal" << endl;

}