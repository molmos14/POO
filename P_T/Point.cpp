#include "Point.h"

//Point::Point(double x1, double x2){}

double Point::getX(){return m_x;}
double Point::getY(){return m_y;}

void Point::setX(double x){
  m_x = x;
}

void Point::setY(double y){
  m_y = y;
}

double Point::distance(){
  // No se que colocar en distancia ya que su UML dice que recibe un p1:Point y regresa un double, pero no se por que quisiera tener una funcion para distancia cuando se hace de manera más rápida en calcular perimetro.
  return 0;
}

double Point::suma(){
  // Lo mismo pasa en esta función, no se para que quiere una función suma cuando se puede hacer todo en el calcular el perimetro. Preguntale super bien que quiere en verdad en cada función por que no ayudan sus explicaciones abstractas sobre que quiere.
  return 0;
}
