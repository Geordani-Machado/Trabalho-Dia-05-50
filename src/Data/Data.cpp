#include "Data.hpp"

void Data::set_dia(int d){
	dia = d;
}

void Data::set_mes(int m){
  mes = m;
}

void Data::set_ano(int a){
  ano = a;
}

void Data::formatar(){
  dataFormatada = to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
}
int Data::get_dia(){
	return dia;
}

string Data::get_dataFormatada(){
  formatar();
	return dataFormatada;
}

int Data::get_mes(){
  return mes;
}

int Data::get_ano(){
  return ano;
}