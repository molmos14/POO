#ifndef CARRITO_H
#define CARRITO_H
#include <string>
#include <vector>
#include "Producto.h"

class Carrito{
private:
  std::vector <Producto> carrito;
  std::vector <int> cantidad;
  double m_suma;
public:
  void set_producto(Producto prod1);
  void set_cantidad(int cantidad);
  void get_total();
  
};

#endif
