#include <iostream>
#include "DateClass.h"

DateClass::DateClass(){
  m_year = 2022;
  m_month = 1;
  m_day = 1;
}

DateClass::DateClass(int year, int month, int day){
  setDate(year, month, day);
}

int DateClass::get_year(){return m_year;}

int DateClass::get_month(){return m_month;}

int DateClass::get_day(){return m_day;}

void DateClass::set_year(int year){
  if(year > 0){
    m_year = year;
  }else{
    m_year = 2022;
  } 
}

void DateClass::set_month(int month){
  if(month > 0 and month <= 12){
    m_month = month;
  }else{
    m_month = 1;
  }
}
void DateClass::set_day(int day){
  if(day > 0 and day <= 31){
    m_day = day;
  }else{
    m_day = 1;
  }
}

void DateClass::setDate(int year, int month, int day){
  set_year(year);
  set_month(month);
  set_day(day);
}

void DateClass::print(){
  std::cout << m_day << "/" << m_month << "/" << m_year << std::endl; 
}

