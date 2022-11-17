#include <iostream>

class Prueba{
  public:
    int atributo;
    char otro_atributo;
    void imprime(){
      std::cout << "Hola mundo" << std::endl;
    }
 
}; //Siempre va con punto y coma al final 

int main(){
  Prueba p1;  //objeto 1 con nombre p1
  Prueba p2;

  p1.atributo = 1;
  p1.otro_atributo = 'a';
  p1.atributo += 1;
  p1.imprime();

  return 0;
}
