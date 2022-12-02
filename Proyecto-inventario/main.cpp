#include <iostream>
#include <string>

int main(){
  int opcion;
  while(true){
    std::cout << "////////////////MENÚ//////////////////\n" <<  "1) Opción 1\n2) Opción 2\n3) Opción 3\n4) Opción 4\n" <<"Eliga la opción que desee utilizar:"; std::cin >> opcion;
    switch(opcion){
      case 1:
        std::cout << "1" << std::endl;
      case 2:
        std::cout << "2" << std::endl;
    }

  }

  return 0;
}
