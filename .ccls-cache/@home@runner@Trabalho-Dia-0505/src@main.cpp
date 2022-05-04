#include <iostream>
#include <string>
#include <locale>
#include <vector>
#include "color.hpp"
using namespace std;

// includes
#include "./Pessoa/Pessoa.hpp" 
#include "./Ingresso/Ingresso.hpp"
#include "./Evento/Evento.hpp"
#include "./Data/Data.hpp"
#include "./Local/Local.hpp"
#include "./Horario/Horario.hpp"

// cria a invocação para chamar a classe
Pessoa pessoa;
Evento evento;
Ingresso ingresso;
Data data;
Local local;
Horario horario;

// variaveis globais
	int controlemenu = 0, controle=1;
	string NomeEvento;

void CriarEvento(){

	setlocale (LC_ALL,"portuguese");
  cout << color::purple << "------------- Criar Evento ------------ \n" << color::off;
	cout << "Qual o nome do Evento? \n";
	cout << "Digite o nome do Evento: ";
	cin.ignore();
	getline(cin ,NomeEvento);
	evento.set_nomeEvento(NomeEvento);
	cout << "------------------------------------\n";
	data.CriarData(); 
	cout << "\n";
	horario.CriarHorario();
	cout << "\n";
	local.CriarLocal();
	evento.set_qtdEventos();
}

void ListarEvento () {
  cout << color::cyan << "------------- Listar Eventos ------------ \n" << color::off;
	if(evento.get_qtdEventos() == 0){
		cout << color::yellow << "------------- Alerta ❗ ------------ \n";
		cout << "Nenhum Evento foi encontrado! 🥲 \n";
		cout << "------------------------------------ \n \n" << color::off;
	}else{
		evento.get_nomeEvento();
	}
}

void ComprarIngresso(){ // Comprar Ingresso
  cout << color::green << "------------- Comprar Ingresso ------------ \n" << color:: off;
		if(evento.get_qtdEventos() == 0){
			cout << color::yellow << "------------- Alerta ❗ ------------ \n";
			cout << "Nenhum Evento esta vendendo ingresso no momento\n";
			cout << "------------------------------------ \n \n"  << color::off;
		}else{
      
    string proprietario = pessoa.get_nome();
			ingresso.set_proprietario(proprietario);
			ingresso.set_evento(evento.get_nomeEvento());
      }
}

void PedirReembolso() { // Pedir Reembolso
	string nomeevento;
	bool achou = 0;
		do{
			cout << color::green << "------------- Pedir Reembolso ------------ \n" << color::off;
			cout << "Para qual Evento você deseja pedir reembolso?\n";
			cout << "digite o nome do evento: ";
			cin >> nomeevento;
			cout << "------------------------------------ \n \n";
				if(evento.get_nomeEvento() != nomeevento){
					cout << color::redn << "------------- Erro! ------------ \n";
					cout << "Nenhum Evento foi encontrado com esse nome, tente novamente\n";
					cout << "------------------------------------ \n \n" << color::off;
				}else{
				achou =1;
			}
	}while(achou == 0);
}
// ----------- Menu da aplicação -----------
void Menu(){ // Menu 
	do{
  int op;
			cout << color::purple << " 👋 Bem vindo ao Comprar Ingressos.com 🤩🥳 \n" << color::off;
			cout << "Aqui você encontra os melhores preços para os Melhores eventos! \n";
			cout << "Escolha uma das opções abaixo.. \n \n";
			cout << color::blue << " ----------- Menu ------- \n" << color::off;
			cout << "1 - Cadastrar | Criar perfil \n";
			cout << "2 - Logar \n";
			cout << "---------------------------------------------\n";
			cin >> op;
		switch(op)
			{
				case 1:
					pessoa.CriarPerfil();
				break;
				case 2://Criar evento
					CriarEvento();
				break;
				case 3: //Listar Eventos | Comprar Ingressos
					ListarEvento();
					ComprarIngresso();
				break;
				case 4://Pedir reembolso
					PedirReembolso();
				break;
			} //switch
	}while(controlemenu == 0);
}

// -- Menu para produtor

void MenuProdutor(){
  cout << color::blue << " 👋 Olá \n" << color::off;
	cout << pessoa.get_nome();
	cout << "2 - Criar evento\n";
	cout <<	"3 - Listar Eventos | Comprar ingressos \n";
	cout << "4 - Pedir Reembolso \n";
	
}


// ---- menu do usuario
void MenuUsuario(){
  
	cout <<	"3 - Listar Eventos | Comprar ingressos \n";
	cout << "4 - Pedir Reembolso \n";
  
}

// ----------- Main -----------
int main() { //Main
	setlocale (LC_ALL,"portuguese");
	Menu();
}