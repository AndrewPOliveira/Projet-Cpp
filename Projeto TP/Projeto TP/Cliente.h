#ifndef CLIENTE_H 
#define CLIENTE_H 
  
#include "Pessoa.h" 
  
class Cliente: public Pessoa 
{ 
  int estado;//saber se ele tem carro alugado(vai conter a referencia do carro) ou não(recebe 0) 
  
public: 
  Cliente();
  Cliente(string, unsigned long long, endereco, data);
  void locarCarro(int); 
  void deslocarCarro();
  int getEstado() const;

  void mostrar();//mostrar dados de Cliente
}; 
#endif