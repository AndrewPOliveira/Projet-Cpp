#ifndef LOCADORA_H
#define LOCADORA_H

#include "Carro.h"
#include "Empregado.h"
#include "Cliente.h"
#include <fstream>//contem as funções de manipulação de arquivos
#include <cstring>
#include <cstdlib>
#include <locale>
#include <conio.h>

class Locadora
{
	Carro *car;
	Empregado *emp;
	Cliente *clien;
	int quantCar, quantFunc, quantClient;

	void salvarArquivo();

public:

	Locadora();//ler arquivo e alocar os valores dinamicamente

	float locarCarro(int, unsigned long long, short); //referencia carro, cpf da pessoa, quantidade de dias
	void devolverCarro(unsigned long long);//cpf do cliente

	int contratarFuncionario(Empregado);//dados de funcionario e retorna a matricula
	bool demitirFuncionario(int);//por numero da matricula
	void consultarFuncionarios();//mostrar funcionarios ativos

	void cadastrarCliente(Cliente);
	void consultarClientesAtivos();//clientes com carro locado
	void consultarClientesCadastrados();

	void adicionarCarro(Carro);//para adicionar carro Ã  frota
	bool removerCarro(int);//referencia para retirar carro da frota
	void consultarEstoque();//mostrar carros no estoque
	void mostrarPorCategoria(string);//categoria que deseja ver

	float calcularAluguel(string, int); //categoria e quantidade de dias

	int TesteFuncionario(int);

	~Locadora();//salvar arquivo e dar delete nos vetores alocados

};

#endif
