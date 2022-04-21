#include <iostream>
using namespace std;

//        includes
#include "./Pessoa/Pessoa.hpp"
#include "./Data/Data.hpp"
#include "./Local/Local.hpp"
#include "./Evento/Evento.hpp"
#include "./Ingresso/Ingresso.hpp"
#include "./Dinheiro/Dinheiro.hpp"
#include "./Horario/Horario.hpp"

// cria a invocação para chamar a classe
Pessoa pessoa;
Data data;
Local local;
Evento evento;
Ingresso ingresso;
Horario horario;
Dinheiro dinheiro;

// variavei globais
int controlemenu = 0;


void CriarPerfil(){
	string nome, email, senha;
	cout << "------ Criar Perfil ------- \n";
	cout << "Qual o seu nome:\n";
	cin >> nome;
	pessoa.set_nome(nome);
	cout << "Qual o seu e-mail:\n";
  cin >> email;
	pessoa.set_email(email);
	cout << "Qual a sua senha:\n";
	cin >> senha;
	pessoa.set_senha(senha);
	cout << "------------- Sucesso ! ------------ \n";
	cout << "Perfil criado com sucesso! :) \n";
	cout << "------------------------------------ \n \n";
	controlemenu = 0;
}

void CriarEvento () {

  cout << "------------- Criar Evento ------------ \n";
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

void ComprarIngresso () {
    
    cout << "------------- Comprar Ingresso ------------ \n";
	if(evento.get_qtdEventos() == 0){
		cout << "------------- Alerta ! ------------ \n";
		cout << "Nenhum Evento esta vendendo ingresso no momento\n";
		cout << "------------------------------------ \n \n";
	}

	string proprietario;
	proprietario = pessoa.get_nome();
	ingresso.set_proprietario(proprietario);
	string eventonome;
	eventonome = evento.get_nomeEvento();
	ingresso.set_evento(eventonome);
  
}

void PedirReembolso() {
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


void Menu(){

	do{
  int op;
	cout << " ----------- Escolha uma opção abaixo ------- \n";
	cout << "1 - Criar perfil \n";
	cout << "2 - Criar evento\n";
	cout << "3 - Listar Eventos | Comprar ingressos \n";
	cout << "4 - Pedir Reembolso \n";
	cout << "---------------------------------------------\n \n";
	cin >> op;

		switch(op)
			{
				case 1://Criar Perfil
					CriarPerfil();
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
	
}//menu

int main() {

	Menu();
  
}//main