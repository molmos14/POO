#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void calcula(){
  int respuesta;
  vector<int> vct;
  
  while(respuesta != -1){
    cout << "Número a ingresar (-1 para terminar): "; cin >> respuesta;
    if (respuesta != -1){
      vct.push_back(respuesta);
    }
    else{
      break;
    }
  }
  int max =  *max_element(vct.begin(), vct.end());
  int min =  *min_element(vct.begin(), vct.end());
  int size = vct.size();
  int suma = 0;
  for (int i = 0; i < vct.size(); i++){
    suma += vct[i];
  }
  cout << "Fueron ingresados " << size << " números" << endl;
  cout << "Numero máximo " << max << endl;
  cout << "Numero mínimo " << min << endl;
  cout << "La suma es: " << suma << endl;
}

int main(){
  calcula();
  return 0;
}
