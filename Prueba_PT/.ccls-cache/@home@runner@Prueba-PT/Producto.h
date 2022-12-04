#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using std::string;

class Producto{
    private:
        string m_id_prod;
        string m_nombre_prod;
        double m_precio;
        int m_unidad_stock;
    
    public:
        Producto();
        Producto(string id_prod, string nombre_prod, double precio, int unidad_stock);

        std::string get_id_prod();
        string get_nombre_prod();
        double get_precio();
        int get_unidad_stock();

        void set_id_prod(string id_prod);
        void set_nombre_prod(string nombre_prod);
        void set_precio(double precio);
        void set_unidad_stock(int unidad_stock);
        void set_Producto(string id_prod, string nombre_prod, double precio, int unidad_stock);
        void to_string();


};
#endif