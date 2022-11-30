#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <string>

class Archivo {
private:
  std::string nombre, tamano;
  int porcentaje;

public:
  Archivo();
  Archivo(std::string nombre, std::string tamaño);

  std::string getNombre();
  std::string getTamano();
  int getPorcentaje();

  void setPorcentaje(int porcentaje);
};

#endif