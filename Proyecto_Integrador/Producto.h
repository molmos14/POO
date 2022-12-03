#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>

class Producto {
private:
  std::string m_id_producto;
  std::string m_nombre_producto;
  double m_precio_producto;
  int m_stock;
public:
  Producto();
  Producto(std::string id, std::string nombre, double precio, int stock);

  void set_id(std::string id);
  void set_nombre(std::string nombre);
  void set_precio(double precio);
  void set_stock(int stock);

  std::string get_id();
  std::string get_nombre();
  double get_precio();
  int get_stock();
};

#endif
