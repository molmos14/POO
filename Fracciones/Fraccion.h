#ifndef FRACCION_H
#define FRACCION_H

class Fraccion{
  private:
    int m_num, m_den;

  public:
    Fraccion();
    Fraccion(int num, int den);
    
    int get_num();
    int get_den();

    void set_num(int num);
    void set_den(int den);

    double calcValorReal();
    double sumar(Fraccion fraccion, Fraccion otra_fraccion);
    void imprimir();
};

#endif
