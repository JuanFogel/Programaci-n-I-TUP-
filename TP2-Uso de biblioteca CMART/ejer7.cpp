#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  const int b = 4;
  const int gamma = 60;
  const int alpha = 90;
  float a, c, beta, radianes;

  beta = 180 - alpha - gamma;
  radianes = gamma * M_PI / 180;

  a = b / sin(radianes);
  c = b / tan(radianes);

  cout << "el angulo B es: " << beta << endl;
  cout << "el angulo a es: " << a << endl;
  cout << "el angulo c es: " << c << endl;

  return 0;
}
// tan(a)
// sin(c)