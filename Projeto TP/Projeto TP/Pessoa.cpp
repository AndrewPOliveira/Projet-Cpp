#include "Pessoa.h"
#include "Pessoa.h"

Pessoa::Pessoa(){}
Pessoa::Pessoa(string nome, unsigned long long CPF, endereco end, data datanasc)
{
	this -> nome = nome;
	this -> CPF = CPF;
	this -> end = end;
	this -> datanasc = datanasc;
}
void Pessoa::setNome(string nome)
{
	this -> nome = nome;
}
void Pessoa::setCPF(unsigned long long CPF)
{
	this -> CPF = CPF;
}
void Pessoa::setEndereco(endereco end)
{
	this -> end = end;
}
void Pessoa::setDataNas(data datanas)
{
	this -> datanasc = datanas;

}
string Pessoa::getNome()
{
	return nome;
}
unsigned long long Pessoa::getCPF()
{
	return CPF;
}
endereco Pessoa::getEndereco()
{
	return end;
}
data Pessoa::getDataNas()
{
	return datanasc;
}