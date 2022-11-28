#include "Fraccion.cpp"
#include <iostream>
#include <vector>

int main(){
  Fraccion f1, f2;
  f1 = Fraccion(2, 5);
  f2 = Fraccion(3,10);
  f1.sumar(f2);
  std::cout << f1.calcValorReal() << std::endl;
  std::cout << f2.calcValorReal() << std::endl;
  ////////////////////////////////////////////
  Fraccion F1, F2, F3, F4, F5, sumatoria;
  std::vector <Fraccion> vec_fracciones = {F1, F2, F3, F4, F5, sumatoria};
  for(int i = 1; i <= 5; i++){
    int num, den;
    std::cout << "Dame el numerador(numerito de arriba) de la Fraccion " << i << ": "; std::cin >> num;
    std::cout << "Dame el denominador de la Fraccion(numerito de abajo) " << i << ": "; std::cin >> den;
    vec_fracciones[i] = Fraccion(num, den);
    vec_fracciones.push_back(vec_fracciones[i]);
    vec_fracciones[i].imprimir();
  }
  for(int i = 1; i <= 5; i++){
    vec_fracciones[5] = vec_fracciones[5].sumar(vec_fracciones[i]);
  }
  vec_fracciones[5].imprimir();
  return 0;
};
