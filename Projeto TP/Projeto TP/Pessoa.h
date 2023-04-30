#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using namespace std;

struct endereco
{
	string rua;
	int numero;
	string bairro;
	int CEP;
};

struct data
{
	int dia, mes, ano;
};

class Pessoa
{
	string nome;
	unsigned long long CPF;
	endereco end;
	data datanasc;

public:
	Pessoa();
	Pessoa(string, unsigned long long, endereco, data);

	void setNome(string);
	string getNome();
	void setCPF(unsigned long long);
	unsigned long long getCPF();

	void setEndereco(endereco);
	endereco getEndereco();

	void setDataNas(data);
	data getDataNas();

	virtual void mostrar() = 0;
};
#endif
