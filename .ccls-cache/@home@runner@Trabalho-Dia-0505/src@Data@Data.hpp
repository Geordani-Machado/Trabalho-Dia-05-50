#include <iostream>
using namespace std;

  class Data {
    public:
			void set_dia(int dia);
			void set_mes(int mes);
			void set_ano(int ano);
      string get_dataFormatada(); // get_dia + get_mes + get_ano
			int get_dia();
			int get_mes();
			int get_ano();
			void formatar(); //formata  pro padrão dd//mm/aa
			string getDataFormatada();
			

    private:
      int dia;
      int mes;
      int ano;
      string dataFormatada;
  };