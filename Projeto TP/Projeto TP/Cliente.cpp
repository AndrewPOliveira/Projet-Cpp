#include "Cliente.h" 
  
Cliente::Cliente(string nome, unsigned long long CPF, endereco end, data datanasc):Pessoa(nome, CPF, end, datanasc){}
Cliente::Cliente(){estado=0;}
int Cliente::getEstado() const 
{ 
  return estado; 
} 
void Cliente::locarCarro(int refe) 
{ 
  estado = refe;//referencia do carro alugado
} 
void Cliente::deslocarCarro() 
{ 
  estado = 0; 
} 
void Cliente::mostrar()//mostrar dados de Cliente
{
  cout << "Nome      --> " << getNome() << endl;
	cout << "CPF       --> " << getCPF() << endl;
	cout << "ENDEREÇO " <<
	endl << "Rua       --> " << getEndereco().rua << endl;
	cout << "Número    --> " << getEndereco().numero << endl;
	cout << "Bairro    --> " << getEndereco().bairro << endl;
	cout << "CEP       --> " << getEndereco().CEP << endl;
	cout << "Data de Nascimento --> " << getDataNas().dia << "/" <<
	getDataNas().mes << "/" << getDataNas().ano << endl;
}