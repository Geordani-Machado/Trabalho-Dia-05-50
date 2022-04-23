#include "Pagamento.hpp"
#include "../Pessoa/Pessoa.hpp"
#include "../Dinheiro/Dinheiro.hpp" 

Pessoa pessoa;
Dinheiro dinheiro;


 void Pagamento::set_valor(double v){
   valor = v;
 }
    void Pagamento::set_tipoMoeda(int tM){
      tipoMoeda = tM;
    }
    void Pagamento::set_tipoTransacao(int tT){
      tipoTransacao = tT;
    }
    double Pagamento::get_valor(){
        return valor;
    }
    int Pagamento::get_tipoMoeda(){
      return tipoMoeda;
    }
    int Pagamento::get_tipoTransacao(){
      return tipoTransacao;
    }

void Pagar(string d, string p, double v){

	
	

	
	
	
}