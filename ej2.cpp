#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main(){
  double A, B, C, x, resultado;
  cout << "Dame el valor de A, B y C separados con espacios: ";
  cin >> A >> B >> C;
  x = -B-(sqrt(pow(B, 2))-4*A*C)/(2*A);
  resultado = (A*pow(x,2)) + B*x + C;
  cout << "El resultado es: " << resultado << endl;
}

