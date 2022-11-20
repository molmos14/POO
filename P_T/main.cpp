#include <iostream>
#include "Triangulo.h"
#include "Point.h"

int main(){
  double x, y;
  Point p1;
  Triangulo T1;
  for(int i = 1; i <= 3; i ++){
    std::cout << "Valor en X del punto " << i << " : "; std::cin >> x;
    p1.setX(x);
    std::cout << "Valor en Y del punto " << i << " : "; std::cin >> y;
    p1.setY(y);
    T1.agregarVertice(x, y);
  }
  std::cout << "El primetro del Triangulo es: " << T1.calculaPerimetro() << std::endl;
  return 0;
}

