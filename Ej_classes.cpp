#include <iostream>

class DateClass{
  int m_year, m_month, m_day;
  // por defecto son privados

  public:
    void setDate(int y, int m, int d){
      m_year = y;
      m_month = m;
      m_day = d;
      // se usa m para identificar que es un miembro 
    }
    void print(){
      std::cout << m_day << "/" << m_month << "/" << m_year << std::endl;
    }
};

int main(){
  DateClass date1;
  DateClass date2;
  date1.setDate(2022, 11, 14);
  date2.setDate(2022, 12, 2);

  date1.print();
  date2.print();
}
