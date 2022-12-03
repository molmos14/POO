#include "Producto.h"
#include "inventario.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using std::ifstream;
using std::stringstream;
using std::string;

void Inventario::get_csv(){
  ifstream file;
  file.open("inventario.csv");
  string linea, ID, producto, precio, stock;

while (getline(file, linea)){
  stringstream token(linea);
  getline(token, ID, ',');
  getline(token, producto, ',');
  getline(token, precio, ',');
  getline(token, stock, ',');
  double m_precio = stod(precio);
  int m_stock = stoi(stock);} 
}

void Inventario::imprimir(){   
for (int i = 0; i < inventario.size(); i++){
  std::cout << i+1 << ") "<< inventario[i].get_id() << " ";
  std::cout << inventario[i].get_nombre() << " ";
  std::cout << inventario[i].get_precio() << " ";
  std::cout << inventario[i].get_stock() << std::endl;
  }
}
Producto Inventario::get_prod(int id){ return inventario[id]; }
