#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  const int b = 4;
  const int gamma = 60;
  const int alpha = 90;
  float a, c, beta;

  beta = 180 - alpha - gamma;
  a = b / tan(gamma * M_PI / 180);
  c = b / sin(gamma * M_PI / 180);

  cout << "el angulo B es: " << beta << endl;
  cout << "el angulo a es: " << a << endl;
  cout << "el angulo c es: " << c << endl;

  return 0;

  const int b = 4;
  const int gamma = 60;
  const int alpha = 90;
  float a, c, beta;
}