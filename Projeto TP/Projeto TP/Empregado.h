#ifndef EMPREGADO_H
#define EMPREGADO_H

#include "Pessoa.h"

class Empregado: public Pessoa
{
	int matricula;
public:
	Empregado();
	Empregado(string, unsigned long long, endereco, data);

	void setMatricula(int);
	int getMatricula() const;

	void mostrar();//mostrar dados de Empregado

};
#endif
