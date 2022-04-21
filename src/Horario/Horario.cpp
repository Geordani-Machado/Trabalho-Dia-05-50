#include "Horario.hpp"

  void Horario::set_hora(int h){
    hora = h;
  }
  void Horario::set_minuto(int m){
		minuto = m;
  }

	int Horario::get_minuto(){
		return  minuto;
	}

  int Horario::get_hora(){
    return hora;
  }