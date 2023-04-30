#ifndef CARRO_H
#define CARRO_H
#include <iostream>
using namespace std;

class Carro
{

	int referencia;
	short portas;
	string marca, modelo, cor, categoria;
	bool estado;

public:

	Carro();

	void setReferencia(int);
	int getReferencia() const;

	void setPortas(short);
	short getPortas() const;

	void setMarca(string);
	string getMarca() const;

	void setModelo(string);
	string getModelo() const;

	void setCor(string);
	string getCor() const;

	void setCategoria(string);
	string getCategoria() const;

	void mostrarDados();

	void locar();
	void deslocar();
	bool getEstado();
	void setEstado(bool);//true==locado e false==vago

};
#endif
