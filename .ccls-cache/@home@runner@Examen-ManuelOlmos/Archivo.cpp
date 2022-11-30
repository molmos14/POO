#include "Archivo.h"
#include <iostream>

Archivo::Archivo() {}

Archivo::Archivo(std::string nombre, std::string tamaño) {
  this->porcentaje = 0;
  this->nombre = nombre;
  this->tamano = tamaño;
}

std::string Archivo::getNombre() { return this->nombre; }
std::string Archivo::getTamano() { return this->tamano; }
int Archivo::getPorcentaje() { return this->porcentaje; }

void Archivo::setPorcentaje(int porcentaje) {
  if (porcentaje <= 100 and porcentaje >= 0) {
    this->porcentaje = porcentaje;
  }
}