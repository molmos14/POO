#include "Carrito.h"
#include <iostream>

void Carrito::set_producto(Producto prod1){
  carrito.push_back(prod1);
}

void Carrito::set_cantidad(int cant){
  cantidad.push_back(cant);
}

void Carrito::get_total(){ 
  this->m_suma = 0;
  
  for(int i = 0; i < carrito.size(); i++){
    m_suma = carrito[i].get_precio() * cantidad[i];
  }
  
  std::cout << "El total a pagar es: " << m_suma << std::endl;
}
