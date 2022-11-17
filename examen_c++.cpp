#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
  double precio, iva, r;
  cout << "Dame el precio base del producto: ";
  cin >> precio;
  cout << "Dame el iva a pagar: ";
  cin >> iva;
  if (iva >= 1){  
    iva /= 100;
  }
  r = precio * iva + precio;
  cout << "El precio del producto mas el %" << iva << " de iva, es: $" << r << endl;
}
