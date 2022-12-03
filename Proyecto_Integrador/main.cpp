#include "Carrito.h"
#include "Producto.h"
#include "inventario.h"
#include <iostream>
#include <string>

int main(){
  Inventario inventario;
  Carrito carrito;
  Producto producto;
while (true){
  std::cout << "############### M E N Ú ################" << std::endl;
  std::cout << "1) Elegir producto para agregar a carrito\n";
  std::cout << "2) Terminar la compra\n";

  int opcion;
  std::cout << "\nElija la ocpion elegida: "; std::cin >> opcion;
  
if(opcion == 1){
  inventario.imprimir();
  int eleccion, cant;
  std::cout << "Dame el id del producto elegido: "; std::cin >> eleccion;
  std::cout << "Dame la cantidad que comprarás: "; std::cin >> cant;
  producto = inventario.get_prod(eleccion);
  carrito.set_producto(producto);
  carrito.set_cantidad(cant);
  }else if(opcion == 2){
    carrito.get_total();
    break;
  }else{
    std::cout << "Elija una opcion valida" << std::endl;
  }
}

  return 0;
}
