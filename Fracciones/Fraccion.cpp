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

void Fraccion::set_num(int num){ m_num = num;}
void Fraccion::set_den(int den){ m_den = den;}

double Fraccion::calcValorReal(){
  double n =  static_cast<double>(m_num);
  double d =  static_cast<double>(m_den);
  double division = n / d;
  return division;
}

void Fraccion::sumar(Fraccion otra_fraccion){
  int suma_num = (m_num * otra_fraccion.m_den) + (m_den * otra_fraccion.m_num);
  int suma_den = (m_den * otra_fraccion.m_den);
  // std::cout << "La suma es: " << suma_num << "/" << suma_den << std::endl;
  otra_fraccion = Fraccion(suma_num, suma_den);
}

void Fraccion::imprimir(){
  std::cout << m_num << "/" << m_den << " (" << calcValorReal() << ")" << std::endl;
}
