#include "Evento.hpp"
using namespace std;


#include "../Horario/Horario.hpp"
#include "../Data/Data.hpp"
#include "../Local/Local.hpp"

Horario horario;
Data data;
Local ClasLocal;

void Evento::set_produtor(string produtor){ // Recebe e define o nome do produtor do evento
	nomeProdutor = produtor;
	}
void Evento::set_nomeEvento(string ne){
	nomeEvento = ne;
	}
void Evento::set_dia(int d){dia = d;}

void Evento::set_mes(int m){
	mes = m;
}
void Evento::set_ano(int a){
  ano = a;
}
void Evento::set_hora(int h) {
  hora = h;
}
void Evento::set_minuto(int m) {
  minuto = m;
}	
void Evento::set_local(string l) {
  local = l;
}
			
void Evento::set_qtdIngresso(int qtdi){
  qtdIngresso = qtdi;
}
			
void Evento::set_vliIngresso(float vli){
  vlIngresso = vli;
}

int Evento::get_hora(){
	return hora;
}

int Evento::get_minuto(){
  return minuto;
}

string Evento::get_local(){
  return local; 
}
      
int Evento::get_qtdIngresso(){
  return qtdIngresso;
}
      
float Evento::get_vlIngresso(){
  return vlIngresso;
}
      
string Evento::get_produtor(){
  return nomeProdutor;
}
      
string Evento::get_nomeEvento(){
  return nomeEvento;
}
      
int Evento::get_dia(){
  return dia;
}
      
int Evento::get_mes(){
  return mes;
}
      
int Evento::get_ano(){
	return ano;
}

void Evento::set_qtdEventos(){
  qtdEventos = qtdEventos+1;
}
	    
int Evento::get_qtdEventos() {
  return qtdEventos;
}

string ne;

void Evento::CriarEvento(){
	setlocale (LC_ALL,"portuguese");
  cout << "------------- Criar Evento ------------ \n";
	cout << "Qual o nome do Evento? \n";
	cout << "Digite o nome do Evento: ";
	cin >> ne;
	nomeEvento = ne;
	cout << "------------------------------------\n";
	data.CriarData(); 
	cout << "\n";
	horario.CriarHorario();
	cout << "\n";
	ClasLocal.CriarLocal();
}