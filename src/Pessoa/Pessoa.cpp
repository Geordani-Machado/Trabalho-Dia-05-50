#include "Pessoa.hpp"
#include "../color.hpp"

void Pessoa::set_email(string e){email = e;}
void Pessoa::set_nome(string n){nome = n;}
void Pessoa::set_senha(string s){senha = s;}
string Pessoa::get_nome(){return nome;}
string Pessoa::get_email(){return  email;}
string Pessoa::get_senha(){return senha;}

void Pessoa::CriarPerfil(){
	string n, e, s;
	cout << "------ Criar Perfil ------- \n";
	cout << "Qual o seu nome:\n";
	cin.ignore();
	getline(cin ,n);
	nome = n;
	cout << "Qual o seu e-mail:\n";
  cin >> email;
	email = e;
	cout << "Qual a sua senha:\n";
	cin >> senha;
	senha = s;
	cout << color::green << "------------- Sucesso ! ------------ \n" << color::off;
	cout << "Perfil criado com sucesso! 🤩 \n";
	cout << "------------------------------------ \n \n";
}

