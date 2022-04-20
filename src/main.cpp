#include <iostream>
#include "./Pessoa/Pessoa.hpp"
#include "./Data/Data.hpp"

using namespace std;

int controlemenu = 0;

Pessoa pessoa;


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
	cout << "------------------------------------ \n";
	controlemenu = 0;
}

void CriarEvento () {
  
}

void ListarEvento () {

	
  
}

void ComprarIngresso () {
  
}

void PedirReembolso() {
  
}


void Menu(){

	do{
  int op;
	cout << " ----------- Escolha uma opção abaixo ------- \n";
	cout << "1 - Criar perfil \n";
	cout << "2 - Criar evento\n";
	cout << "3 - Listar Eventos | Comprar ingressos \n";
	cout << "4 - Pedir Reembolso \n";
	cout << "---------------------------------------------\n";
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