#include <iostream>
#include <locale>
using namespace std;

// includes
#include "./Pessoa/Pessoa.hpp" 
#include "./Evento/Evento.hpp"
#include "./Ingresso/Ingresso.hpp"

// cria a invocação para chamar a classe
Pessoa pessoa;
Evento evento;
Ingresso ingresso;

// variaveis globais
	int controlemenu = 0, controle=1;

void ListarEvento () {
  cout << "------------- Listar Eventos ------------ \n";
	if(evento.get_qtdEventos() == 0){
		cout << "------------- Alerta ! ------------ \n";
		cout << "Nenhum Evento foi encontrado! :( \n";
		cout << "------------------------------------ \n \n";
	}
  evento.get_nomeEvento();
}
void ComprarIngresso(){ // Comprar Ingresso
  cout << "------------- Comprar Ingresso ------------ \n";
		if(evento.get_qtdEventos() == 0){
			cout << "------------- Alerta ! ------------ \n";
			cout << "Nenhum Evento esta vendendo ingresso no momento\n";
			cout << "------------------------------------ \n \n";
		} string proprietario = pessoa.get_nome();
			ingresso.set_proprietario(proprietario);
			ingresso.set_evento(evento.get_nomeEvento());
}

void PedirReembolso() { // Pedir Reembolso
	string nomeevento;
	bool achou = 0;
		do{
			cout << "------------- Pedir Reembolso ------------ \n";
			cout << "Para qual Evento você deseja pedir reembolso?\n";
			cout << "digite o nome do evento: ";
			cin >> nomeevento;
			cout << "------------------------------------ \n \n";
				if(evento.get_nomeEvento() != nomeevento){
					cout << "------------- Erro! ------------ \n";
					cout << "Nenhum Evento foi encontrado com esse nome, tente novamente\n";
					cout << "------------------------------------ \n \n";
				}else{
				achou =1;
			}
	}while(achou == 0);
}
void Menu(){ // Menu 
	do{
  int op;
			cout << " ----------- Escolha uma opção abaixo ------- \n";
			cout << "1 - Criar perfil \n ";
			cout << "2 - Criar evento\n ";
			cout <<	"3 - Listar Eventos | Comprar ingressos \n";
		  cout << "4 - Pedir Reembolso \n";
			cout << "---------------------------------------------\n \n";
			cin >> op;
		switch(op)
			{
				case 1:
					pessoa.CriarPerfil();
				break;
				case 2://Criar evento
					evento.CriarEvento();
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
int main() { //Main
	setlocale (LC_ALL,"portuguese");
	Menu();
}