#include <iostream>
#include "Carrito.h"
#include "Inventario.h"
#include "Tienda.h"

using std::cout;
using std::cin;
using std::endl;


void Tienda::inicio_tienda(){
    while (true){
    cout << ""<<endl;
    cout << "////////////// Bienvenidos a la super tiendita //////////////" << endl;
    cout << "1) Eleccion de producto" << endl;
    cout << "2) Ver carrito de compras" << endl;
    cout << "3) Terminar compra" << endl;
    cout << "4) Salir" << endl;
    cout << "\n" << endl;

    int opcion;
    cout << "Ingresa la opción: ";
    cin >> opcion;
    cout << "\n" << endl;

        int numero = 0;
        if (opcion == 1)
        {
            seleccionar(); 

        }
        else if(opcion == 2)
        {
            Carr.ver_Carrito();

        }
        else if (opcion == 3)
        {
            Carr.importe_total();

            break;
        }
        else if(opcion == 4)
        {
            cout << "Muchas gracias, hasta pronto" << endl;

            break;
        }
        else
        {
            cout << "Incerte una opción correcta. ";
            cin >> opcion;
        }
   } 
}

void Tienda::seleccionar()
{
    inv.to_string();

    int producto;
    cout << "\n" << endl;
    cout << "Seleccione un producto: ";
    cin >> producto;

    cout << "Ingresa la cantidad "<< endl;
    int cantidad_elegida;
    cin >> cantidad_elegida;

    Producto produ = inv.get_prod(producto); 
    Carr.agregar_carrito(produ); 
    Carr.prod_comprado(cantidad_elegida);
    
    
      }