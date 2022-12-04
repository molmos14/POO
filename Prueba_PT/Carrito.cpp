#include "Carrito.h"
#include <vector>
#include <iostream>
#include "Inventario.h"
#include <string>

using std::cout;
using std::endl;
using std::string;

void Carrito::agregar_carrito(Producto p1){
  carrito.push_back(p1);
}

void Carrito::prod_comprado(int cant){
  cantidad.push_back(cant);
}

void Carrito::importe_total(){ 
  this->suma = 0;
  
  for(int i = 0; i < carrito.size(); i++){
    suma = suma + (carrito[i].get_precio() - 1) * cantidad[i];
  }
  
   cout << "El total a pagar es: " << suma <<endl;
}

void Carrito::ver_Carrito(){
    cout<<"-------------------------Procesando Carrito----------------------------"<<endl;
    cout<<"Este es tu carrito de compras..."<<"\n"<<endl;
      for (int i = 0; i < cantidad.size(); i++)
    {
        cout<<carrito[i].get_nombre_prod()<<" Cantidad:   "<<cantidad[i]<<endl;  
    }
  }
