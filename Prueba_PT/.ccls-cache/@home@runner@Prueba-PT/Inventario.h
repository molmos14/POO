#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <string>
#include <vector>
#include "Producto.h"
using std:: string;
using std::vector;

class Inventario{
    private:
    vector <Producto> inventario;

    public:
    Inventario();
    Producto get_prod(int id);
    int buscarProd(int, int);    
    void to_string();

}; 
#endif