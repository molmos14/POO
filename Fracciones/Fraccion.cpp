#include "Fraccion.h"
#include <iostream>

Fraccion::Fraccion(){
  m_num = 1;
  m_den = 2;
}

Fraccion::Fraccion(int num, int den){
  set_num(num);
  set_den(den);
}

int Fraccion::get_num(){ return m_num; }
int Fraccion::get_den(){ return m_den; }

void Fraccion::set_num(int num){ double m_num = 0.0 + num;}
void Fraccion::set_den(int den){ double m_den = 0.0 + den;}

double Fraccion::calcValorReal(){
  double division;
  division = m_num / m_den;
  return division;
}

double Fraccion::sumar(Fraccion fraccion, Fraccion otra_fraccion){
  int suma_num = ((fraccion.m_num * otra_fraccion.m_den) + (fraccion.m_den * otra_fraccion.m_num));
  int suma_den = (fraccion.m_den * otra_fraccion.m_den);
  return suma_num/suma_den;
}

void Fraccion::imprimir(){
  std::cout << m_num << "/" << m_den << " (" << calcValorReal() << ")" << std::endl;
}
