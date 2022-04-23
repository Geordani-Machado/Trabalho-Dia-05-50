#include "Dinheiro.hpp"
#include "../Pessoa/Pessoa.hpp"
using namespace std;
//Pessoa pessoa;

  void Dinheiro::set_real(double r){
    real = r;
}
  void Dinheiro::set_dolar(double d){
    dolar = d;
}
  
  void Dinheiro::set_euro(double e){
    euro = e;
  }
      
  double Dinheiro::get_real(){
    return real;
  }
      
  double Dinheiro::get_dolar(){
    return dolar;
  }
  
  double Dinheiro::get_euro (){
    return euro;
  }

bool Dinheiro::pagar(string pagar, string receber){
	int i;
	float valor;
  string pix;
  int numCartao;
  string nomeCartao;
  string codValidacao;
  int dataValidade;
	
	cout << "--------- Pagar ---------";
	cout << "Qual o tipo do pagamento ?";
	cout << "| 1 - á vista | | 2 - cartão | | 3 - Pix |";
	cin >> i;
	
	switch (i) {

    case 1:
      cout << "------- À VISTA ------- \n";
			cout << "Qual o valor você deseja tranferir ?";
			cout << "Digite o valor :"; 
			cin >> valor;
		break;

    case 2:
      cout << "------- CARTÃO ------- \n";
      cout << "Digite o número do seu cartão: ";
      cin >> numCartao;
			cout << "Digite o nome do seu cartão: "; 
      cin >> nomeCartao;
      cout << "Digite o código de validação do cartão: ";
      cin >> codValidacao;
			cout << "Digite a data de validade do seu cartão: ";
      cin >> dataValidade;
    break;

    case 3:
      cout << "------- PIX ------- \n";
      cout << "Digite o numero do pix:";
      cin >> pix;
			cout << "Qual o valor você deseja tranferir ?";
			cout << "Digite o valor :"; 
			cin >> valor;
    break;
      }
	return 1;
}