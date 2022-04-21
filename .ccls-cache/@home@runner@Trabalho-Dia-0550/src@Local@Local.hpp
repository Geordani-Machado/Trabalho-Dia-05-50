#include <iostream>
using namespace std;

  class Local {
    public:
			void set_rua(string rua);
			void set_bairro(string bairro);
			void set_numero(int numero);
			void set_cidade(string cidade);
			void set_estado(string estado);
			void set_pais(string pais); // se o evento é internacional | caso não define como brasil
			void set_url(string url); // se o evento for online | insira o link para o evento
			string get_rua();
			string get_bairro();
			int get_numero();
			string get_cidade();
			string get_estado();
			string get_pais();
			string get_url();
			
    private:
			string rua;
			string bairro;
			int numero;
			string cidade;
			string estado;
			string pais;
			string url;
  };