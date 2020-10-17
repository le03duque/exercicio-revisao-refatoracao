#include <string>
#include "Empregado.hpp" 

class Engenheiro : public Empregado {

  public:
    
    void setProjetos (int projetos){
      _projetos = projetos;
    }
    
    int getProjetos () {
      return _projetos; 
    }
    
  private:  
	  int _projetos;
	
};

