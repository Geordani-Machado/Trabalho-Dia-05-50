#include <iostream>
#include <string>
#include <locale>
#include <vector>
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

//sistema de cores
#define VERDE  "\x1b[32m"
#define AMARELO "\x1b[93m"
#define VERMELHO "\x1b[31m"
#define AZUL "\x1b[34m"
#define RESET "\x1b[0m"

// variaveis globais
	int controlemenu = 0, controle=1;
	string NomeEvento;

void CriarEvento(){
	
	setlocale (LC_ALL,"portuguese");
  cout << "------------- Criar Evento ------------ \n";
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
}

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
			cout << "1 - Criar perfil \n";
			cout << "2 - Criar evento\n";
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
int main() { //Main
	setlocale (LC_ALL,"portuguese");
	Menu();
}