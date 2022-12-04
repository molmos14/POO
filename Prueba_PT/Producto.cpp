#include <iostream>
#include "Producto.h"
#include <string>
using std::string;
using std::cout;
using std::endl;

Producto::Producto(){
    m_id_prod = "none";
    m_nombre_prod = "none";
    m_precio = 0;
    m_unidad_stock = 0;
}

Producto::Producto(string id_prod, string nombre_prod, double precio, int unidad_stock){
    set_Producto(id_prod,nombre_prod,precio,unidad_stock);
}
void Producto::set_Producto(string id_prod, string nombre_prod, double precio, int unidad_stock){
    set_id_prod(id_prod); 
    set_nombre_prod(nombre_prod);
    set_precio(precio);
    set_unidad_stock(unidad_stock);
}

std::string Producto::get_id_prod(){return m_id_prod;}
string Producto::get_nombre_prod(){return m_nombre_prod;}
double Producto::get_precio(){return m_precio;}
int Producto::get_unidad_stock(){return m_unidad_stock;}

void Producto::set_id_prod(string id_prod){
    
        m_id_prod = id_prod;
    
}

void Producto::set_nombre_prod(string nombre_prod){
    m_nombre_prod = nombre_prod;
}

void Producto::set_precio(double precio){
    if(precio> 0) {
        m_precio = precio;
    } else{
        m_precio = 0;
    }
}

void Producto::set_unidad_stock(int unidad_stock){
    if(unidad_stock> 0){
        m_unidad_stock = unidad_stock;
    } else{
        m_unidad_stock = 0;
    }
}

void Producto::to_string()
{
    cout<<m_id_prod<<" "<<m_nombre_prod<<" "<<m_precio<<" "<<m_unidad_stock<<endl;
      }