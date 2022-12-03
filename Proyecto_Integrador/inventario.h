#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <vector>
#include <string>
#include "Producto.h"

class Inventario{
private:
  std::vector <Producto> inventario;
public:
  Producto get_prod(int id);
  void get_csv();
  void imprimir();
};

#endif
