#include "Producto.h"
#include <iostream>
#include <string>

Producto::Producto(){
  
}

Producto::Producto(std::string id, std::string nombre, double precio, int stock){
  void set_id(std::string id);
  void set_nombre(std::string nombre);
  void set_precio(double precio);
  void set(int stock);
}

  std::string Producto::get_id(){ return m_id_producto; }
  std::string Producto::get_nombre(){ return m_nombre_producto; }
  double Producto::get_precio(){ return m_precio_producto; }
  int Producto::get_stock(){ return m_stock; }

  void Producto::set_id(std::string id){
    m_id_producto = id;
  }
  void Producto::set_nombre(std::string nombre){
    m_nombre_producto = nombre;
  }
  void Producto::set_precio(double precio){
    m_precio_producto = precio;
  };
  void Producto::set_stock(int stock){
    m_stock = stock;
  };



 
