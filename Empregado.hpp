#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

const int HORA_MAX = 8;

class Empregado {
	
  public:  
    double pagamentoMes(double horasTrabalhadas) {
      double _horasPagas = horasTrabalhadas;
	  //Cálculo de hora extra (+50% se horasTrabalhadas > HORA_MAX)
      if (horasTrabalhadas > HORA_MAX) {
        double  _horasExtras = horasTrabalhadas - HORA_MAX;
        _horasPagas += _horasExtras / 2;
      }
	  return _horasPagas * _salarioHora;
    }
    void setSalarioHora (double salarioHora){
      _salarioHora = salarioHora;
    }
    void setNome (std::string nome){
      _nome = nome; 
    }
    std::string getNome () {
      return _nome;
    }
  private : 
    std::string _nome; 
    double _salarioHora; 
};
#endif 
