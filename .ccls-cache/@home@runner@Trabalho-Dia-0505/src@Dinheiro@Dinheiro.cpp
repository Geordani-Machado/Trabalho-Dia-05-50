#include "Dinheiro.hpp"

  double Dinheiro::set_real(double r){
    real = r;
}
  double Dinheiro::set_dolar(double d){
        dolar = d;
      }
  
  double Dinheiro::set_euro (double e){
    euro = e;
  }
      
  double Dinheiro::get_real(){
    return real;
  }
      
  double Dinheiro::get_dolar(){
    return dolar;
  }
  
  double Dinheiro::get_euro (){
    return euro;
  }