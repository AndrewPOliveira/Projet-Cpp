#include "Empregado.h"

Empregado::Empregado() {}
Empregado::Empregado(string Nome, unsigned long long cpf, endereco end, data date): Pessoa(Nome, cpf, end, date) {}

void Empregado::setMatricula(int matri)
{
	matricula = matri;
}

int Empregado::getMatricula() const
{
	return matricula;
}

void Empregado::mostrar()//mostrar dados de Empregado
{
	cout << "Nome      --> " << getNome() << endl;
	cout << "CPF       --> " << getCPF() << endl;
	cout << "Matrícula --> " << getMatricula() << endl;
	cout << "ENDEREÇO " <<endl << "Rua       --> " << getEndereco().rua << endl;
	cout << "Número    --> " << getEndereco().numero << endl;
	cout << "Bairro    --> " << getEndereco().bairro << endl;
	cout << "CEP       --> " << getEndereco().CEP << endl;
	cout << "Data de Nascimento --> " << getDataNas().dia << "/" <<
		 getDataNas().mes << "/" << getDataNas().ano << endl;
}
