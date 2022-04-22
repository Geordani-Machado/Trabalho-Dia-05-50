#include <iostream>
using namespace std;

  class Pessoa {
    public:
			void set_nome(string nome);
			void set_email(string email);
			void set_senha(string senha);
      string get_nome();
			string get_email();
			string get_senha();

    private:
			string nome;
			string senha;
			string email;

  };