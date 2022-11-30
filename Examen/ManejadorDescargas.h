#ifndef MANEJADORDESCARGAS_H
#define MANEJADORDESCARGAS_H
#include "Archivo.h"
#include <string>

class ManejadorDescargas {
private:
  char m_estado;
  Archivo m_archivoActivo;

public:
  ManejadorDescargas();
  void descargar(Archivo nuevoArchivo);
  void pausar();
  void cancelar();
  void imprimir();
};

#endif