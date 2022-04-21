
#include <iostream>
using namespace std;

// includes
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

	string nomeevento;
	string url, localEvento;
	string rua;
  string bairro;
	int numero;
  string cidade;
  string estado;
  string pais;
	
  cout << "------------- Criar Evento ------------ \n";
	cout << "Qual o nome do Evento? \n";
	cout << "Digite o nome do Evento: ";
	cin >> nomeevento;
	evento.set_nomeEvento(nomeevento);
	int opcao;

	do{
		cout << "O Evento é Presencial ou Online ? \n";
		cout << "1 - Presencial | 2 Online \n";
		cin >> opcao;


		switch (opcao){
			
			
      case 1://presencial
				
  			
          cout << "Qual o endereço do evento? \n";
        	cout << "Digite a rua: ";
          cin >> rua;
  				local.set_rua(rua);
          cout << "Digite o bairro: ";
          cin >> bairro;
  				local.set_bairro(bairro);
          cout << "Digite a cidade: ";
          cin >> cidade;
  				local.set_cidade(cidade);
          cout << "Digite o numero do endereço: ";
          cin >> numero;
  				local.set_numero(numero);
          cout << "Digite o estado onde vai ocorrer o evento: ";
          cin >> estado;
  				local.set_estado(estado);

					cout << "O Evento é Internacional ? ";
					cout << "1 - Sim | 2 - Não ";
					int soun;

					switch(soun)
						{
							case 1:
								cout << "Digite em qual pais o evento vai ocorrer: ";
          			cin >> pais;
  							local.set_pais(pais);
							break;
							case 2:
								local.set_pais("Brasil");
							break;
							default:
							cout << " --------------- Erro ------------ \n";
							cout << " Digite uma Opção valida! \n";
							cout << " ---------------------------------- \n";
						}

			break;
			
			case 2://Online
				
				cout << "Qual o link para acessar o evento: \n";
				cout << "Digite a URl: \n";
				cin >> url;
				local.set_url(url);
				localEvento = url;
				evento.set_local(localEvento);

				cout << " --------------- Sucesso! ------------ \n";
				cout << " O Evento foi criado com Exito ;) \n";
				cout << " ---------------------------------- \n \n";
				
				
			break;
			
			default:
			cout << " --------------- Erro ------------ \n";
			cout << " Digite uma Opção valida! \n";
			cout << " ---------------------------------- \n";
			
		}
		
	}while(opcao < 1 || opcao >2);

	


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