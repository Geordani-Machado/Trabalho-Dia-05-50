#include <iostream>
using namespace std;

  class Dinheiro {
    public:
      double set_real(double real);
      double set_dolar(double dolar);
      double set_euro (double euro);
      double get_real();
      double get_dolar();
      double get_euro ();
    private:
      double real=0;
      double dolar=0;
      double euro=0;
      
  };