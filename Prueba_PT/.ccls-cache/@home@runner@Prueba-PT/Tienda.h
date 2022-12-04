#ifndef TIENDA_H
#define TIENDA_H
#include "Carrito.h"
#include "Inventario.h"
#include <string>


class Tienda
{
private:
    Inventario inv;
    Carrito Carr;
public:
    void inicio_tienda();
    void seleccionar();
    
};
#endif