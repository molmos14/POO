#include <iostream>
#include "DateClass.h"

int main(){
  DateClass d;
  d.set_year(2022);
  d.set_month(100);
  d.set_day(-1);
  d.print();

  DateClass d1(2022, 11, 16);
  d1.print();
  return 0;
}

