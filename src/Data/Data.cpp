#include "Data.hpp"
using namespace std;
int controlemenu1 = 0, d, m, a;
int controle1=1;
bool b1 = 0; 

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



void Data::CriarData(){

	cout << "Qual ano você deseja criar o evento? \n";
	cout << "Digite o ano: ";
  cin >> a;
	if(ano % 400 == 0){
        cout << "É bissexto" << endl;
				b1=1;
    }else if( (ano % 4 == 0) && (ano % 100 != 0) ){
            cout << "É bissexto" << endl;
					b1 =1;
			}else{
        cout << "Não é bissexto" << endl;
				b1 = 0;
		}
  	ano = a;
	}
