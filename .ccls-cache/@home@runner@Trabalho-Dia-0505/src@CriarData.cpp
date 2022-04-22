#include <iostream>
#include "./Data/Data.hpp"
using namespace std;

// variavei globais
	int controlemenu = 0, dia, mes,ano , hora , minuto , numero;
	string nomeevento,url, localEvento, rua, bairro, cidade , estado , pais;

Data data;
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
									controle=0;
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
									cout << "------- Erro -----\n";
									cout << "Defina um dia valido\n";
									cout << "------------------------\n";
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
									cout << "------- Erro -----\n";
									cout << "Defina um dia valido\n";
									cout << "------------------------\n";
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
									cout << "------- Erro -----\n";
									cout << "Defina um dia valido\n";
									cout << "------------------------\n";
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
									cout << "------- Erro -----\n";
									cout << "Defina um dia valido\n";
									cout << "------------------------\n";
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
									cout << "------- Erro -----\n";
									cout << "Defina um dia valido\n";
									cout << "------------------------\n";
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
									cout << "------- Erro -----\n";
									cout << "Defina um dia valido\n";
									cout << "------------------------\n";
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
									cout << "------- Erro -----\n";
									cout << "Defina um dia valido\n";
									cout << "------------------------\n";
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