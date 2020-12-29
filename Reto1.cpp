#include <iostream>

using namespace std;

int main() {
  // Ejercicio 1: Area de circulo = Pi*r^2
  float PI = 3.141592;
  int r = 20;
  float area = PI * (r * r);

  cout << "El area de un circulo de radio " << r << "cm, es de " << area << "cm²" << endl;

  // Ejercicio 2: Calculo de esfera = 4Pi*r^2
  float esfera = (4 * PI) * (r * r);

  cout << "La esfera con un radio de " << r << "cm, es " << esfera << "cm³" << endl;


  return 0;
}
