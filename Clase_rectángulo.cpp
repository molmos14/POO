#include <iostream>
#include <string>

int main(){
  int base, altura;
  std::cout << "Dame la base: "; std::cin >> base;
  std::cout << "Dame la altura: "; std::cin >> altura;
  for(int i = 0; i < altura; i++){
  std::string nachas(base, '*');
  std::cout << nachas << std::endl;
  }
  return 0;
}
