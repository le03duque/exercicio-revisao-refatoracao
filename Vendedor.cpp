#include <string>
#include "Empregado.hpp"

const int MESES = 12;
class Vendedor : public Empregado {

  public:  	  
	
	double quotaTotalAnual() {
	  return _quotaMensalVendas * MESES;
	}
  void setQuotaMensalVendas (double quotaMensalVendas){
    _quotaMensalVendas = quotaMensalVendas;
  }
  private:
    double _quotaMensalVendas;
	
};

