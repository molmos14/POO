#ifndef CARRITO_H
#define CARRITO_H
#include <vector>
#include <string>
#include "Producto.h"
#include "Inventario.h"

using std::vector;
using std::string;

class Carrito{
    private:
    vector <Producto> carrito;
    vector <int> cantidad;
    double suma;
    public:
    void agregar_carrito(Producto p1);
    void prod_comprado(int cant);
    void ver_Carrito();
    void importe_total();
};
#endif