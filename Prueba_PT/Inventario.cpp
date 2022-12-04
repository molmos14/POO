#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Inventario.h"

using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::ifstream;
using std::stringstream;


 

Inventario::Inventario(){
    ifstream archivo;
    archivo.open("inventario.csv");
    string linea;
    while (getline(archivo, linea)) {
        stringstream token(linea);
        string id, nombre, precio, unidad_stock;
        getline(token, id, ',');
        getline(token, nombre, ',');
        getline(token, precio, ',');
        getline(token, unidad_stock, ',');
        Producto prod(id, nombre, stod(precio), stoi(unidad_stock));  
        inventario.push_back(prod);
    }

}

Producto Inventario::get_prod(int num){
  return inventario[num];

}


int Inventario::buscarProd(int prod1, int cantidad)
{
    int producto = stoi(inventario[prod1].get_nombre_prod());

    if (producto < cantidad)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void Inventario::to_string()
{   
    for (int i = 0; i < inventario.size(); i++)
    {
        cout << i+1 << ") "<< inventario[i].get_id_prod() << " ";
        cout << inventario[i].get_nombre_prod() << " ";
        cout << inventario[i].get_precio() << " ";
        cout << inventario[i].get_unidad_stock() << endl;
    }

      }