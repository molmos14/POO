#include "Triangulo.h"
#include "cmath"

void Triangulo::agregarVertice(double x, double y){
  vertices.push_back(x);
  vertices.push_back(y);
}

double Triangulo::calculaPerimetro(){
  s = (sqrt((pow((vertices[2]-vertices[0]),2))+(pow((vertices[3]-vertices[1]),2)))) + (sqrt((pow((vertices[4]-vertices[2]),2))+(pow((vertices[5]-vertices[3]),2)))) + (sqrt((pow((vertices[4]-vertices[0]),2))+(pow((vertices[5]-vertices[1]),2))));
  return s;
}


