#include <iostream>
#include "ManejadorDescargas.h"
#include "Archivo.h"

using std::cout;

int main() {
    cout << "*** Probando Clase Archivo ***\n";
    Archivo a1("Respuestas del examen.pdf", "1 MB");
    Archivo a2("SolucionPractico.h", "60 KB");
    Archivo a3("SolucionPractico.cpp", "100 KB");

    cout << "Nombre Archivo 1: " << a1.getNombre() << "\n";
    cout << "Tamano Archivo 2: " << a2.getTamano() << "\n";
    cout << "Porcentaje Archivo 3: " << a3.getPorcentaje() << "\n";
    a3.setPorcentaje(101);
    cout << "Porcentaje Archivo 3 despues 1er intento: " << a3.getPorcentaje() << "\n";
    a3.setPorcentaje(100);
    cout << "Porcentaje Archivo 3 despues 2ndo intento: " << a3.getPorcentaje() << "\n";

    cout << "*** Probando Clase ManejadorDescargas ***\n";
    ManejadorDescargas md{};
    cout << "Probando descargar...\n";
    md.descargar(a1);
    md.imprimir();

    cout << "Probando pausar...\n";
    md.pausar();
    md.imprimir();

    cout << "Probando cancelar...\n";
    md.cancelar();
    md.imprimir();

    cout << "Probando descargar otro archivo...\n";
    md.descargar(a3);
    md.imprimir();
}