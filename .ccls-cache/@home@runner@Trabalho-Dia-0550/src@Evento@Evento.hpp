#include <iostream>
using namespace std;

  class Evento{
    public:
			void set_qtdEventos();
			void set_produtor(string produtor);
      void set_nomeEvento(string nomeEvento);
			void set_dia(int dia);
			void set_mes(int mes);
			void set_ano(int ano);
			void set_hora(int hora);
			void set_minuto(int minuto);
			void set_local(string local);
			void set_qtdIngresso(int qtdIngresso);
			void set_vliIngresso(float vlIngresso);
      int get_hora();
      int get_minuto();
      string get_local();
      int get_qtdIngresso();
      float get_vlIngresso();
      string get_produtor();
      string get_nomeEvento();
      int get_dia();
      int get_mes();
      int get_ano();
      int get_qtdEventos();
	    
    
      private:
  			string nomeEvento;
  			string nomeProdutor;
        int dia;
        int mes;
        int ano;
				string local;
				int hora;
				int minuto;
				int qtdIngresso;
				int vlIngresso;
				int qtdEventos;
				
  };