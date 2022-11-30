#include <string>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
class Poligono{
private:
    int m_numero_lados;
    float m_largo_lado;
    string m_color;
public:
    string get_color(){ return m_color; }
    Poligono(int numero_lados, float largo_lado, string color){
      m_numero_lados = numero_lados;
      m_largo_lado = largo_lado;
      m_color = color;
    }
 
    float calcularPerimetro(){
        float perimetro;
        return perimetro = m_numero_lados*m_largo_lado;
    }

    float calcularArea(){
        float apotema, area;
        apotema = (m_largo_lado)/(2*tan(180/m_numero_lados));
        area = (calcularPerimetro()*apotema)/2;
        return area;
    } 
};

class Modelo{
private:
    string nombre;
    std::vector <Poligono> poligonos;
    Poligono p1; 
public:
 
    void agregarPoligono(int numero_lados, float largo_lado, string color){
      p1 = Poligono(numero_lados, largo_lado, color);
    }
    float calcula_Area(){
      float area = area + p1.calcularArea();
        return area;
    }
    float calcularPerimetro(){
        float perimetro = perimetro + p1.calcularPerimetro();
        return perimetro;
    }
    vector <string> obtenerColores(){
      vector <string> colores;
      colores.push_back(std::string p1.get_color());
      return colores;
    }
};

int main() {
    Modelo p1;
    p1.agregarPoligono(4, 10, "rojo");
    p1.agregarPoligono(4, 5, "azul");
    p1.agregarPoligono(4, 5, "azul");
    p1.agregarPoligono(4, 7, "azul");
    p1.agregarPoligono(4, 7, "azul");
    p1.agregarPoligono(10, 3, "rosa");
 
    float perimetro = p1.calcularPerimetro();
    float area = p1.calcula_Area();
    
    cout << "Datos Personaje 1" << endl;
 
    cout << "El perimetro es: " << perimetro << endl; // 166
    cout << "El total del area es: " << area << endl; // 317.248
 
    vector<string> colores = p1.obtenerColores();
    cout << "Los colores usados son: " << endl;
    for (string color: colores) {
        cout << color << ", "; // rojo, azul, azul, azul, azul, rosa, 
    }
    cout << endl << "Fin figura." << endl;
 
}
