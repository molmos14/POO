class DateClass{
  private: //solo los podemos modificar con funciones para que el usuario no pueda leer ni modificar las variables.
    int m_year, m_month, m_day;
    // se le coloca un m_ para diferenciar las variables privadas y despues se ocupa el mismo nombre sin la distincion para no tener conflicto de nombres
  
  public:
    
    DateClass();
    DateClass(int year, int month, int day);

    int get_year();
    int get_month();
    int get_day();
    // regresa un entero
    
    void set_year(int year);
    void set_month(int month);
    void set_day(int day);
    void setDate(int year, int month, int day);
    // recibe un valor entero y lo guarda en ese nombre de la variable
    
    void print();

};
