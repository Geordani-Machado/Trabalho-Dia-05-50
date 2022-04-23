#include <iostream>
using namespace std;




// quem esta pagando , quem ira receber , tipo da moeda , tipo do pagamento ( à vista , pix ou cartão )

// se for pago no cartão precisa ter , numero do cartão , codigo de validação , nome impresso no cartão

// se for pix , precisa ter o numero do pix

// se for à vista precisa ter saldo disponivel para realizar o mesmo.

  class Pagamento {

  public:
    void set_valor(double valor);
    double get_valor();
    

  
  private:
    double valor;
    int tipoMoeda;
    int tipoTransacao;
  };