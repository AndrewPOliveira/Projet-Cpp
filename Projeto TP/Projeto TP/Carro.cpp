#include "Carro.h"

Carro::Carro()
{
  estado=0;
  referencia=0;
  portas=4;
}

void Carro::setReferencia(int referencia){
	this->referencia = referencia;
}

int Carro::getReferencia() const{
	return referencia;
}

void Carro::setPortas(short portas){
	this->portas = portas;
}

short Carro::getPortas() const{
	return portas;
}

void Carro::setMarca(string marca){
	this->marca = marca;
}

string Carro::getMarca() const{
	return marca;
}

void Carro::setModelo(string modelo){
	this->modelo = modelo;
}

string Carro::getModelo() const{
	return modelo;
}

void Carro::setCor(string cor){
	this ->cor = cor;
}

string Carro::getCor() const{
	return cor;
}

void Carro::setCategoria(string categoria){
	this ->categoria = categoria;
}

string Carro::getCategoria() const{
	return categoria;	
}

void Carro::mostrarDados()
{
  cout<<endl<<"Categoria: "<<categoria<<endl<<"Marca: "<< marca <<endl<<"Modelo: "<< modelo<< "  ("<< cor << ")"<<endl<< "Portas: "<< portas <<endl<< "Estado: "<< ((estado==0)?"Disponivel":"Locado")<<endl<<"Referencia: "<<referencia<<endl<<endl;
}

void Carro::locar()
{
  estado=true;
}

void Carro::deslocar()
{
  estado=false;
}

bool Carro::getEstado()
{
  return estado;
}

void Carro::setEstado(bool aux)
{
  estado=aux;
}