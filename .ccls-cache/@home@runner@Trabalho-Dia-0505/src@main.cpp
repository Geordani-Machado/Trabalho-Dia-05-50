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

// variaveis globais
	int controlemenu = 0, dia, mes,ano , hora , minuto , numero;
	string nomeevento,url, localEvento, rua, bairro, cidade , estado , pais;

void Erro(){
	cout << " --------------- Erro ------------ \n";
	cout << " Digite uma Opção valida! \n";
	cout << " ---------------------------------- \n";
}

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

void CriarData(){
	int controle=0;
	bool b = 0; 
	if(ano % 400 == 0){
        cout << "É bissexto" << endl;
				b=1;
    }else if( (ano % 4 == 0) && (ano % 100 != 0) ){
            cout << "É bissexto" << endl;
					b =1;
			}else{
        cout << "Não é bissexto" << endl;
				b = 0;
		}
	cout << "Qual ano você deseja criar o evento? \n";
	cout << "Digite o ano: ";
          cin >> ano;
  				data.set_ano(ano);
	cout << "------------------------------------\n";
cout << "Qual o mês : \n 1- Janeiro \n 2- Fevereiro \n 3- Março \n 4- Abril \n 5- Maio \n 6- Junho \n 7- Julho \n 8- Agosto \n 9- Setembro \n 10- Outubro \n 11- Novembro \n 12- Dezembro \n";
          	cin >> mes;
						switch(mes)
						{
							case 1:
								cout << "------- Janeiro -----\n";
  							cout << "Qual a data do evento? \n";
								cout << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
								cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
								cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
								cout <<"|29| |30| |31| \n";
       					cout << "Digite o dia: ";
								if(dia >= 1 && dia <= 31){
									data.set_dia(dia);
									data.set_mes(1);
									controle=1;
								}else{
									Erro();
								}break;
						
              case 2:
								cout << "------- Fevereiro-----\n";
                cout << "Qual a data do evento? \n";
                cout << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10 \n";
                cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
								cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
							if(b==1){
								cout <<"|29| \n";
							}
								
								if((dia >= 1 && dia <= 29 && b==1) || (dia >=1 && dia <= 28 && b==0)){
									data.set_dia(dia);
									data.set_mes(2);
									controle=2;
								}else{
									Erro();
								}break;
						
              case 3:
								cout << "------- Março -----\n";
                cout << "Qual a data do evento? \n";
								cout << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
								cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
								cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
								cout <<"|29| |30| |31| \n";
       					cout << "Digite o dia: ";
								if(dia >= 1 && dia <= 31){
									data.set_dia(dia);
									data.set_mes(3);
									controle=3;
								}else{
									Erro();
								}break;
						
              case 4:
								cout << "------- Abril -----\n";
                cout << "Qual a data do evento? \n";
								cout << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
								cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
								cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
								cout <<"|29| |30| \n";
       					cout << "Digite o dia: ";
								if(dia >= 1 && dia <= 30){
									data.set_dia(dia);
									data.set_mes(4);
									controle=4;
								}else{
									Erro();
								}break;
						
              case 5:
								cout << "------- Maio -----\n";
                cout << "Qual a data do evento? \n";
								cout << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
								cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
								cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
								cout <<"|29| |30| |31| \n";
       					cout << "Digite o dia: ";
								if(dia >= 1 && dia <= 31){
									data.set_dia(dia);
									data.set_mes(5);
									controle=5;
								}else{
									Erro();
								}break;
						
              case 6:
								cout << "------- Junho -----\n";
                cout << "Qual a data do evento? \n";
								cout << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
								cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
								cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
								cout <<"|29| |30| \n";
       					cout << "Digite o dia: ";
								if(dia >= 1 && dia <= 30){
									data.set_dia(dia);
									data.set_mes(6);
									controle=6;
								}else{
									Erro();
								}break;
						
              case 7:
								cout << "------- Julho -----\n";
                cout << "Qual a data do evento? \n";
								cout << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
								cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
								cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
								cout <<"|29| |30| |31| \n";
       					cout << "Digite o dia: ";
								if(dia >= 1 && dia <= 31){
									data.set_dia(dia);
									data.set_mes(7);
									controle=7;
								}else{
									Erro();
								}break;
						
              case 8:
								cout << "------- Agosto -----\n";
                cout << "Qual a data do evento? \n";
								cout << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
								cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
								cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
								cout <<"|29| |30| |31| \n";
       					cout << "Digite o dia: ";
								if(dia >= 1 && dia <= 31){
									data.set_dia(dia);
									data.set_mes(8);
									controle=8;
								}else{
									Erro();
								}break;
						
              case 9:
								cout << "------- Setembro -----\n";
                cout << "Qual a data do evento? \n";
								cout << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
								cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
								cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
								cout <<"|29| |30| \n";
       					cout << "Digite o dia: ";
								if(dia >= 1 && dia <= 30){
									data.set_dia(dia);
									data.set_mes(9);
									controle=9;
								}else{
									cout << "------- Erro -----\n";
									cout << "Defina um dia valido\n";
									cout << "------------------------\n";
								}break;
						
              case 10:
								cout << "------- Outubro -----\n";
                cout << "Qual a data do evento? \n";
								cout << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
								cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
								cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
								cout <<"|29| |30| |31| \n";
       					cout << "Digite o dia: ";
								if(dia >= 1 && dia <= 31){
									data.set_dia(dia);
									data.set_mes(10);
									controle=10;
								}else{
									cout << "------- Erro -----\n";
									cout << "Defina um dia valido\n";
									cout << "------------------------\n";
								}break;
						
              case 11:
								cout << "------- Novembro -----\n";
                cout << "Qual a data do evento? \n";
								cout << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
								cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
								cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
								cout <<"|29| |30| \n";
       					cout << "Digite o dia: ";
								if(dia >= 1 && dia <= 30){
									data.set_dia(dia);
									data.set_mes(11);
									controle=11;
								}else{
                  cout << "------- Erro -----\n";
									cout << "Defina um dia valido\n";
									cout << "------------------------\n";
									controle=0;
								}break;
						
              case 12:
								cout << "------- Dezembro -----\n";
                cout << "Qual a data do evento? \n";
								cout << "|1| |2| |3| |4| |5| |6| |7| |8| |9| |10| \n";
								cout <<"|11| |12| |13| |14| |15| |16| |17| |18| |19| \n";
								cout <<"|20| |21| |22| |23| |24| |25| |26| |27| |28| \n";
								cout <<"|29| |30| |31| \n";
       					cout << "Digite o dia: ";
								if(dia >= 1 && dia <= 31){
									data.set_dia(dia);
									data.set_mes(12);
									controle=1;
								}else{
									cout << "------- Erro -----\n";
									cout << "Defina um dia valido\n";
									cout << "------------------------\n";
								}break;
						}
}
void CriarHorario(){ // Criar Horario
				cout << "------------------------------------\n";
  				cout << "Qual o horario do evento? \n";
        	cout << "Digite a hora: ";
          cin >> hora;
  				horario.set_hora(hora);
        cout << "Digite o minuto: ";
          cin >> minuto;
          horario.set_minuto(minuto);
				cout << "------------------------------------\n";
}
void CriarEvento () {
  cout << "------------- Criar Evento ------------ \n";
	cout << "Qual o nome do Evento? \n";
	cout << "Digite o nome do Evento: ";
	cin >> nomeevento;
	evento.set_nomeEvento(nomeevento);
	cout << "------------------------------------\n";
			CriarData();
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
				//cria uma subcondição
				cout << "------------------------------------\n";
					cout << "O Evento é Internacional ? ";
					cout << "1 - Sim | 2 - Não ";
					int soun;
				cout << "------------------------------------\n";
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
						} break;
			
			case 2://Online
				cout << "Qual o link para acessar o evento: \n";
				cout << "Digite a URl: ";
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
			cout << "1 - Criar perfil \n 2 - Criar evento\n 3 - Listar Eventos | Comprar ingressos \n 4 - Pedir Reembolso \n";
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
}
int main() { //Main
	Menu();
}