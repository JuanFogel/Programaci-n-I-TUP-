#include <iostream>

using namespace std;

int main(){
    int cant_zap, total;
    const int zapatos = 8000;

    cout << "Ingrese la cantidad de zapatos " << endl;
    cin >> cant_zap;

    if (cant_zap >= 30){    
    total= cant_zap * zapatos * 0.60;
     cout << "El total es: " << total << endl;
    }
     else if (cant_zap >= 20){
        total= cant_zap * zapatos * 0.80;
        cout << "El total es: " << total << endl;
     }
     else if (cant_zap >= 10){
        total= cant_zap * zapatos * 0.90;
        cout << "El total es: " << total << endl;
     }
     else{
     total= cant_zap * zapatos;
        cout << "El total es: " << total << endl;
}


}