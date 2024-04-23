#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float n, reslog, restrunc;

    cout << "ingrese un numero: " << endl;
    cin >> n;

    reslog = log10(n);
    restrunc = trunc(reslog);

    restrunc++;

    // int n, reslog;
    // reslog = trunc(log10(n)) + 1; OTRA MANERA DE RESOLVERLO

    cout << "tiene " << restrunc << " digitos" << endl;
}