#include "Locadora.h"

Locadora::Locadora()//ler arquivo e alocar os valores dinamicamente
{
	quantCar = quantFunc = quantClient = 0;

	ifstream arquivo;
	int i, aux[5];
	unsigned long long aux2;
	string aux1[5];
	endereco aux3;
	data aux4;


	arquivo.open("carros.txt");//escrever dados de carros

	arquivo >> quantCar;

	car = new Carro[quantCar + 15](); //Cria um vetor de objetos chamando o construtor desparametrizado para cada objeto do vetor

	for(i = 0; i < quantCar; i++)
	{
		arquivo >> aux[0] >> aux[1] >> aux1[0] >> aux[2] >> aux1[1] >> aux1[2] >> aux1[3];

		car[i].setEstado(aux[0]);
		car[i].setReferencia(aux[1]);
		car[i].setCategoria(aux1[0]);
		car[i].setPortas(aux[2]);
		car[i].setMarca(aux1[1]);
		car[i].setModelo(aux1[2]);
		car[i].setCor(aux1[3]);
	}
	arquivo.close();

	arquivo.open("empregados.txt");//escrever dados de empregados

	arquivo >> quantFunc;

	emp = new Empregado[quantFunc + 15]();

	for(i = 0; i < quantFunc; i++)
	{
		arquivo >> aux[0] >> aux2 >> aux1[0] >> aux4.dia >> aux4.mes >> aux4.ano >> aux3.CEP >> aux3.bairro >> aux3.rua >> aux3.numero;

		emp[i].setMatricula(aux[0]);
		emp[i].setCPF(aux2);
		emp[i].setNome(aux1[0]);
		emp[i].setDataNas(aux4);
		emp[i].setEndereco(aux3);
	}

	arquivo.close();

	arquivo.open("clientes.txt");//escrever dados de clientes

	arquivo >> quantClient;

	clien = new Cliente[quantClient + 15]();
	for(i = 0; i < quantClient; i++)
	{
		arquivo >> aux[0] >> aux2 >> aux1[0] >> aux4.dia >> aux4.mes >> aux4.ano >> aux3.CEP >> aux3.bairro >> aux3.rua >> aux3.numero;

		clien[i].locarCarro(aux[0]);
		clien[i].setCPF(aux2);
		clien[i].setNome(aux1[0]);
		clien[i].setDataNas(aux4);
		clien[i].setEndereco(aux3);
	}

	arquivo.close();
}

float Locadora::locarCarro(int refe, unsigned long long cpf, short quantDias)
{
	unsigned short i, j;
	for(i = 0; i < quantCar; i++)
	{
		if(car[i].getReferencia() == refe)
		{
			string aux = car[i].getCategoria(); //guardar categoria do carro

			for(j = 0; j < quantClient; j++)
			{
				if(clien[j].getCPF() == cpf)
				{
					if(clien[j].getEstado() == 0)
					{
						car[i].locar();
						clien[j].locarCarro(refe);
						float total = calcularAluguel(aux, quantDias);
						return total;//valor que deve receber do cliente
					}
					return 0;//caso o cliente jÃ¡ tenha carro alugado
				}
			}
			return 0;//caso do cpf nÃ£o existir
		}
	}
	return 0;//caso de nÃ£o haver carro com a referencia dada
}

void Locadora::devolverCarro(unsigned long long cpf)
{
	unsigned short i;
	int Ref;

	for(i = 0; i < quantClient; i++)
	{
		Ref = clien[i].getEstado();//estado guarda a referencia do carro

		if(car[i].getReferencia() == Ref)
			car[i].deslocar();


		if(clien[i].getCPF() == cpf)
			clien[i].deslocarCarro();

	}
}

int Locadora::contratarFuncionario(Empregado aux)
{

	//essas duas ultimas linhas podem mudar
	int i;

	for(i = 0; i < quantFunc; i++)
	{
		if(emp[i].getMatricula() == aux.getMatricula() )
		{
			return false;
		}
		
	}
	quantFunc++;
	emp[quantFunc - 1] = aux;
	return true;

}

bool Locadora::demitirFuncionario(int matric)//numero de cadastro
{
	int i, j;

	for(i = 0; i < quantFunc; i++)
	{
		if(emp[i].getMatricula() == matric )
		{
			for(j = i; j < quantFunc; j++ )
				emp[j] = emp[ j + 1 ];

			quantFunc--;
			return true;
		}
	}
	return false;
}

void Locadora::consultarFuncionarios()//mostra funcionarios ativos
{
	for(unsigned short i = 0; i < quantFunc; i++)
	{
		emp[i].mostrar();
		cout << endl << endl;
	}
	if(quantFunc == 0)
	{
		cout << "\t\tNão tem Funcinários na Empresa" << endl;
	}
}

void Locadora::cadastrarCliente(Cliente c)
{
	quantClient++;
	clien[quantClient - 1] = c;
}

void Locadora::consultarClientesAtivos()//clientes com carro locado
{
	unsigned short i;
	for(i = 0; i < quantClient; i++)
	{
		if(clien[i].getEstado() != 0)
			clien[i].mostrar();
	}
}

void Locadora::consultarClientesCadastrados()
{
	for(unsigned short i = 0; i < quantClient; i++)
		clien[i].mostrar();
}

void Locadora::adicionarCarro(Carro aux)
{
	quantCar++;
	car[quantCar - 1] = aux;
}

bool Locadora::removerCarro(int refe)
{
	unsigned short i = 0, j;

	while(car[i].getReferencia() != refe)
	{
		i++;
	}

	if(car[i].getEstado() == false) //carro locado nÃ£o pode ser removido
	{
		for(j = i; j < quantCar; j++)
			car[j] = car[j + 1];
		quantCar--;
		return true;
	}
	return false;
}

void Locadora::consultarEstoque()//mostra apenas os carros que nÃ£o estÃ£o locados
{

	for(unsigned short i = 0; i < quantCar; i++)
	{
		if(car[i].getEstado() == false)
			car[i].mostrarDados();
	}
}

void Locadora::mostrarPorCategoria(string cate)//categoria que deseja
{
	cout << cate << endl;
	for(short i = 0; i < quantCar; i++)
	{
		if(car[i].getCategoria() == cate)
			car[i].mostrarDados();
	}
}

float Locadora::calcularAluguel(string cat, int quantDias) //categoria e quantidade de dias
{
	if(cat == "Sedan")
		return(quantDias * 200);
	else if(cat == "Hatch")
		return(quantDias * 250);
	else if(cat == "SUV")
		return(quantDias * 320);
	else if(cat == "PickUp")
		return(quantDias * 300);
	else if(cat == "Esportivo")
		return(quantDias * 400);
	return 0;
}

void Locadora::salvarArquivo()
{
	ofstream arquivo;
	unsigned short i;

	arquivo.open("carros.txt");//escrever dados de carros

	arquivo << quantCar << endl;
	for(i = 0; i < quantCar; i++)
		arquivo << car[i].getEstado() << endl << car[i].getReferencia() << endl << car[i].getCategoria() << endl << car[i].getPortas() << endl << car[i].getMarca() << endl << car[i].getModelo() << endl << car[i].getCor() << endl;


	arquivo.close();

	arquivo.open("empregados.txt");//escrever dados de empregados

	arquivo << quantFunc << endl;
	for(i = 0; i < quantFunc; i++)
		arquivo << emp[i].getMatricula() << endl << emp[i].getCPF() << endl << emp[i].getNome() << endl << emp[i].getDataNas().dia << endl << emp[i].getDataNas().mes << endl << emp[i].getDataNas().ano << endl << emp[i].getEndereco().CEP << endl << emp[i].getEndereco().bairro << endl << emp[i].getEndereco().rua << endl << emp[i].getEndereco().numero;


	arquivo.close();

	arquivo.open("clientes.txt");//escrever dados de clientes

	arquivo << quantClient << endl;
	for(i = 0; i < quantClient; i++)
		arquivo << clien[i].getEstado() << endl << clien[i].getCPF() << endl << clien[i].getNome() << endl << clien[i].getDataNas().dia << endl << clien[i].getDataNas().mes << endl << clien[i].getDataNas().ano << endl << clien[i].getEndereco().CEP << endl << clien[i].getEndereco().bairro << endl << clien[i].getEndereco().rua << endl << clien[i].getEndereco().numero;


	arquivo.close();
}

int Locadora::TesteFuncionario(int mat)
{
	for(int i = 0; i < quantFunc; i++)
	{
		if(emp[i].getMatricula() == mat)
			return 1;
	}
	return 0;
}

Locadora::~Locadora()
{
	salvarArquivo();
	delete []car;
	delete []emp;
	delete []clien;//desalocação da memória
}
