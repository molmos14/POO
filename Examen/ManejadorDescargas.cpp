#include "ManejadorDescargas.h"
#include "Archivo.h"
#include <iostream>

ManejadorDescargas::ManejadorDescargas() { char m_estado = 'N'; }

void ManejadorDescargas::descargar(Archivo nuevoArchivo) {
  m_archivoActivo = nuevoArchivo;
  m_estado = 'D';
}

void ManejadorDescargas::pausar() { m_estado = 'P'; }

void ManejadorDescargas::cancelar() { m_estado = 'C'; }

void ManejadorDescargas::imprimir() {
  if (m_estado == 'D') {
    std::cout << "Descargando: " << m_archivoActivo.getNombre() << " - "
              << m_archivoActivo.getTamano() << " - "
              << m_archivoActivo.getPorcentaje() << "%" << std::endl;
  } else if (m_estado == 'P') {
    std::cout << "Pausado: " << m_archivoActivo.getNombre() << " - "
              << m_archivoActivo.getTamano() << " - "
              << m_archivoActivo.getPorcentaje() << "%" << std::endl;
  } else if (m_estado == 'C') {
    std::cout << "Sin descargas activas" << std::endl;
  }
}