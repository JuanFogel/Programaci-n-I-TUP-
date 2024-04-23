#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double num;
    int ent;

    cout << "INgrese num" << endl;
    cin >> num;

    ent = num;

    if (num == ent)
        cout
            << "ES ENTERO" << endl;
    else
        cout << "nO ES entero" << endl;
}