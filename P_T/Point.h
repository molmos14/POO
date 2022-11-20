//Investiga bien el por que el profesor pide valores de entrada y salida extraños ya que pide un valor de entrada de la clase p1:Point. Además de que regresa el mismo tipo como en la suma; es por eso que lo cambie para que fuera más fácil pero preguntale como quiere las funciones
#ifndef Point

class Point{
  private:
    double m_x, m_y;
  
  public:
    
    //Point();
    //Point(double x1, double x2);
    // Pregunta sobre que quiere que haga el constructor ya que solo lo coloca en el UML como x1 y x2. Me imagino que para poder hacer la resta pero es bastante raro.

    double getX();
    double getY();
    
    void setX(double x);
    void setY(double y);
    double distance();
    double suma();

};
#endif
