//Lo mismo pasa aca por que no se a que se refiere que el vector solo acepte valores de la clase Point; tendrás que preguntarle muy bien sobre como quiere los valores de entrada y salida de cada función. Dile que te explique el por que tiene que recibir p1:Point ya que es confuso.
#ifndef Triangulo
#include <vector>

class Triangulo{
  public: 
    double x, y, s;
    std::vector <double> vertices;
    void agregarVertice(double x, double y);
    double calculaPerimetro(); 
};
#endif
