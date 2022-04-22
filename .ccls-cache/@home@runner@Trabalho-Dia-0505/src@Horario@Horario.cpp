#include "Horario.hpp"

  void Horario::set_hora(int h){
    hora = h;
  }
  void Horario::set_minuto(int m){
    do {
			cout << " --------------- Erro ------------ \n";
			cout << " Digite uma Opção valida! \n";
			cout << " Minuto precisa ser maior ou igual a 0 e menor que 60 \n";
			cout << " ---------------------------------- \n";
      
    }while (m >= 0 || m < 60);
		minuto = m;
  }

	int Horario::get_minuto(){
		return  minuto;
	}

  int Horario::get_hora(){
    return hora;
  }