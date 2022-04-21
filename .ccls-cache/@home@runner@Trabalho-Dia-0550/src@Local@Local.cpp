#include "Local.hpp"

  void Local::set_rua(string r){
    rua = r;
  }

  void Local::set_bairro(string b){
    bairro = b;
  }
	
  void Local::set_numero(int n){
    numero = n;
  }
	
  void Local::set_cidade(string c){
    cidade = c;
  }
	
  void Local::set_estado(string e){
    estado = e;
  }
	
  void Local::set_pais(string p){
    pais = p;
  }
  
  void Local::set_url(string u){
    url = u;
  } 

  string Local::get_rua(){
		return rua;
	}
	string Local::get_bairro(){
		return  bairro;
	}
	int Local::get_numero(){
		return numero;
	}
	string Local::get_cidade(){
    return cidade;
  }
	string Local::get_estado(){
    return estado;
  }
	string Local::get_pais(){
    return pais;
  }
	string Local::get_url(){
		return url;
  }

 