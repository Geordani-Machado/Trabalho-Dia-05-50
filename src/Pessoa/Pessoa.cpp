#include "Pessoa.hpp"

void Pessoa::set_email(string e){
	
	email = e;
}

void Pessoa::set_nome(string n){
	nome = n;
}

void Pessoa::set_senha(string s){
	senha = s;
}

string Pessoa::get_nome(){
	return nome;
}
string Pessoa::get_email(){
	return  email;
}
string Pessoa::get_senha(){
	return senha;
}