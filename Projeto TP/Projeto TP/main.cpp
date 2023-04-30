#include "Locadora.h"

int main()
{

	setlocale(LC_ALL, "");
	Locadora loc;

	int valor, valor2, quantDias;

	Empregado aux_1;
	Carro aux_2;
	Cliente aux_3;
	endereco aux_4;
	data aux_5;

	string Nome, Marca, Modelo, Cor, Categoria;
	unsigned long long CPF;
	int Matricula, x , opcao_1, opcao_2, Referencia, Portas, QuantDias, w , z, matric;
	system ("color 7C");



	cout << " _________________________________________________________________ \n";
	cout << "|                                                                 |\n";
	cout << "|                                                                 |\n";
	cout << "|                                                                 |\n";
	cout << "|                                                                 |\n";
	cout << "|                                                                 |\n";
	cout << "|                   LOCADORA DE VEÍCULOS                          |\n";
	cout << "|                   	   Bem Vindo                              |\n";
	cout << "|                                                                 |\n";
	cout << "|                                                                 |\n";
	cout << "|                                                                 |\n";
	cout << "|                                                                 |\n";
	cout << "|                                                                 |\n";
	cout << "|                                                                 |\n";
	cout << "|_________________________________________________________________|\n";
	system("pause");
	system("cls");
	do
	{
		cout << " _________________________________________________________________ \n";
		cout << "|                        MENU PRINCIPAL                           |\n";
		cout << "|                                                                 |\n";
		cout << "|1. Consultar Carros em Estoque                                   |\n";
		cout << "|                                                                 |\n";
		cout << "|2. Simular Preços                                                |\n";
		cout << "|                                                                 |\n";
		cout << "|3. Área do Funcionário                                           |\n";
		cout << "|                                                                 |\n";
		cout << "|4. Sair                                                          |\n";
		cout << "|                                                                 |\n";
		cout << "|                                                                 |\n";
		cout << "|                                                                 |\n";
		cout << "|                                                                 |\n";
		cout << "|_________________________________________________________________|\n";
		cout << "Insira a opção desejada" << endl;
		cin >> valor;

		system("cls");

		switch(valor)
		{
		case 1:
			cout << " _________________________________________________________________ \n";
			cout << "|1. Sedan                                                         |\n";
			cout << "|                                                                 |\n";
			cout << "|2. Hatch                                                         |\n";
			cout << "|                                                                 |\n";
			cout << "|3. SUV                                                           |\n";
			cout << "|                                                                 |\n";
			cout << "|4. PickUp                                                        |\n";
			cout << "|                                                                 |\n";
			cout << "|5. Esportivo                                                     |\n";
			cout << "|                                                                 |\n";
			cout << "|6. Mostrar Todos                                                 |\n";
			cout << "|                                                                 |\n";
			cout << "|                                                                 |\n";
			cout << "|_________________________________________________________________|\n";
			cout << "Escolha a Categoria" << endl;
			cin >> valor2;

			system("cls");
			cout << " _________________________________________________________________ \n";
			cout << "|";

			switch(valor2)
			{
			case 1:
				loc.mostrarPorCategoria("Sedan");
				break;
			case 2:
				loc.mostrarPorCategoria("Hatch");
				break;
			case 3:
				loc.mostrarPorCategoria("SUV");
				break;
			case 4:
				loc.mostrarPorCategoria("PickUp");
				break;
			case 5:
				loc.mostrarPorCategoria("Esportivo");
				break;
			case 6:
				loc.consultarEstoque();
				break;
			default:
				cout << " _________________________________________________________________ \n";
				cout << "|                      OPÇÃO INVÁLIDA!!!                          |\n";
				cout << "|_________________________________________________________________|\n";
				break;
			}
			cout << "|_________________________________________________________________\n";
			cout << endl;
			break;
		case 2:
			cout << " _________________________________________________________________ \n";
			cout << "|                                                                 |\n";
			cout << "|                                                                 |\n";
			cout << "|1. Sedan                                                         |\n";
			cout << "|                                                                 |\n";
			cout << "|2. Hatch                                                         |\n";
			cout << "|                                                                 |\n";
			cout << "|3. SUV                                                           |\n";
			cout << "|                                                                 |\n";
			cout << "|4. PickUp                                                        |\n";
			cout << "|                                                                 |\n";
			cout << "|5. Esportivo                                                     |\n";
			cout << "|                                                                 |\n";
			cout << "|                                                                 |\n";
			cout << "|_________________________________________________________________|\n";
			cout << "Escolha a Categoria" << endl;
			cin >> valor2;

			system("cls");

			cout << " _________________________________________________________________ \n";
			cout << "|Por quantos dias você deseja alugar?                             |\n";
			cout << "|_________________________________________________________________|\n";
			cin >> quantDias;
			system("cls");


			switch(valor2)
			{
			case 1:
				cout << " _________________________________________________________________ \n";
				cout << "|O valor do aluguel é: ";
				cout << loc.calcularAluguel("Sedan", quantDias);
				break;
			case 2:
				cout << " _________________________________________________________________ \n";
				cout << "|O valor do aluguel é: ";
				cout << loc.calcularAluguel("Hatch", quantDias);
				break;
			case 3:
				cout << " _________________________________________________________________ \n";
				cout << "|O valor do aluguel é: ";
				cout << loc.calcularAluguel("SUV", quantDias);
				break;
			case 4:
				cout << " _________________________________________________________________ \n";
				cout << "|O valor do aluguel é: ";
				cout << loc.calcularAluguel("PickUp", quantDias);
				break;
			case 5:
				cout << " _________________________________________________________________ \n";
				cout << "|O valor do aluguel é: ";
				cout << loc.calcularAluguel("Esportivo", quantDias);
				break;
			default:
				cout << " _________________________________________________________________ \n";
				cout << "|                      OPÇÃO INVÁLIDA!!!                          |\n";
				cout << "|_________________________________________________________________|\n";
				break;
			}
			cout << " reais";

			cout << endl << "|_________________________________________________________________\n";
			cout << endl;
			break;
		case 3:
			cout << " _________________________________________________________________ \n";
			cout << "|Digite seu numero de matrícula:                                  |\n";
			cout << "|_________________________________________________________________|\n";
			cin >> Matricula;
			system("cls");

			x = loc.TesteFuncionario(Matricula);
			if(Matricula == 1)
			{
				w = 0;
				while(w == 0)
				{
					cout << " _________________________________________________________________ \n";
					cout << "|                       Área do Gerente                           |\n";
					cout << "|                                                                 |\n";
					cout << "|1. Contratar Funcionário              2. Demitir Funcionário     |\n";
					cout << "|                                                                 |\n";
					cout << "|3. Consultar Funcionários             4. Carros                  |\n";
					cout << "|                                                                 |\n";
					cout << "|5. Voltar ao Menu Principal                                      |\n";
					cout << "|                                                                 |\n";
					cout << "|                                                                 |\n";
					cout << "|                                                                 |\n";
					cout << "|                                                                 |\n";
					cout << "|                                                                 |\n";
					cout << "|                                                                 |\n";
					cout << "|_________________________________________________________________|\n";
					cin >> opcao_1;

					system("cls");

					switch(opcao_1)
					{
					case 1:
						cout << " _________________________________________________________________ \n";
						cout << "|                   Dados do Novo Funcionário                     |\n";
						cout << "|_________________________________________________________________|\n";
						cout << "Nome : ";
						cin >> Nome;
						cout << "\nCPF : ";
						cin >> CPF;
						cout << "\nMatrícula :";
						cin >> matric;

						cout << endl << "ENDEREÇO" << endl << endl;
						cout << "Rua: ";
						cin >> aux_4.rua;
						cout << endl << "Número: ";
						cin >> aux_4.numero;
						cout << endl << "Bairro: ";
						cin >> aux_4.bairro;
						cout << endl << "CEP: ";
						cin >> aux_4.CEP;

						cout << "\nDATA DE NASCIMENTO" << endl << endl;
						cout << "Dia: ";
						cin >> aux_5.dia;
						cout << endl << "Mês: ";
						cin >> aux_5.mes;
						cout << endl << "Ano: ";
						cin >> aux_5.ano;

						aux_1.setNome(Nome);
						aux_1.setCPF(CPF);
						aux_1.setEndereco(aux_4);
						aux_1.setDataNas(aux_5);
						aux_1.setMatricula(matric);
						system("cls");

						if(loc.contratarFuncionario(aux_1))
						{
							cout << " _________________________________________________________________ \n";
							cout << "|                   Funcionario contratado!                       |\n";
							cout << "|_________________________________________________________________|\n";
						}
						else
						{
							cout << " _________________________________________________________________ \n";
							cout << "|                   Cadastro não efetuado!                        |\n";
							cout << "|_________________________________________________________________|\n";

						}
						break;
					case 2:
						cout << " _________________________________________________________________ \n";
						cout << "                        Funcionários                             \n\n";
						loc.consultarFuncionarios();
						cout << "________________________________________________________________\n";
						cout << " _________________________________________________________________ \n";
						cout << "|        Digite a matricula do funcionario que vai demitir        |\n";
						cout << "|_________________________________________________________________|\n";
						cin >> matric;
						system("cls");

						if(loc.demitirFuncionario(matric))
						{
							cout << " _________________________________________________________________ \n";
							cout << "|                   Funcionario Demitido                          |\n";
							cout << "|_________________________________________________________________|\n";
						}
						else
						{
							cout << " _________________________________________________________________ \n";
							cout << "|                     Erro ao Demitir                             |\n";
							cout << "|_________________________________________________________________|\n";
						}
						break;
					case 3:
						cout << " _________________________________________________________________ \n";
						cout << "                        Funcionários                             \n\n";
						loc.consultarFuncionarios();
						cout << "________________________________________________________________\n";
						break;
					case 4:
						//Todos os carros
						break;
					case 5:
						w = 1;
						break;
					default:
						cout << " _________________________________________________________________ \n";
						cout << "|                      OPÇÃO INVÁLIDA!!!                          |\n";
						cout << "|_________________________________________________________________|\n";
						break;

					}
					system("pause");
					system("cls");
				}
			}
			else if(x)
			{
				z = 0;
				while(z == 0)
				{
					cout << " _________________________________________________________________ \n";
					cout << "|                     Área do Funcionário                         |\n";
					cout << "|                                                                 |\n";
					cout << "|1. Locar Carro                          2. Devolver Carro        |\n";
					cout << "|                                                                 |\n";
					cout << "|3. Consultar Estoque                    4. Cadastrar Cliente     |\n";
					cout << "|                                                                 |\n";
					cout << "|5. Clientes Ativos                      6. Clientes Cadastrados  |\n";
					cout << "|                                                                 |\n";
					cout << "|7. Adicionar Carro                      8. Remover Carro         |\n";
					cout << "|                                                                 |\n";
					cout << "|9. Sair                                                          |\n";
					cout << "|                                                                 |\n";
					cout << "|                                                                 |\n";
					cout << "|_________________________________________________________________|\n";
					cin  >> opcao_2;
					system("cls");

					switch(opcao_2)
					{
					case 1:
						cout << " _________________________________________________________________ \n";
						cout << "|                        Locar Carro                              |\n";
						cout << "|_________________________________________________________________|\n";
						cout << " _________________________________________________________________ \n";
						cout << "|                     Carros Disponíveis                          |\n";
						cout << "|_________________________________________________________________|\n";
						loc.consultarEstoque();
						cout << "_________________________________________________________________\n";
						cout << "Digite a referencia do carro:" << endl;
						cin >> Referencia;
						cout << endl << "CPF do cliente:";
						cin >> CPF;
						cout << endl << "Quantidade de Dias:";
						cin >> QuantDias;
						x = loc.locarCarro(Referencia, CPF, QuantDias);
						system("cls");
						if(x == 0)
						{
							cout << " _________________________________________________________________ \n";
							cout << "|                 Carro não pode ser locado                       |\n";
							cout << "|_________________________________________________________________|\n";
						}
						else
						{
							cout << " _________________________________________________________________ \n";
							cout << "|";
							cout << "Valor a ser Pago: " << x << " reais" << endl;
							cout << "|_________________________________________________________________\n";
							cout << endl;
						}
						break;
					case 2:
						cout << " _________________________________________________________________ \n";
						cout << "|        Qual o cpf do cliente que vai devolver o carro?          |\n";
						cout << "|_________________________________________________________________|\n";
						cin >> CPF;
						loc.devolverCarro(CPF);
						break;

					case 3:
						cout << " _________________________________________________________________ \n";
						cout << "|                    Carros Disponíveis                           |\n";
						cout << "|_________________________________________________________________|\n";
						loc.consultarEstoque();
						break;

					case 4:
						cout << " _________________________________________________________________ \n";
						cout << "|                   Dados do Novo Cliente                         |\n";
						cout << "|_________________________________________________________________|\n";
						cout << "Nome : ";
						cin >> Nome;
						cout << "\nCPF : ";
						cin >> CPF;

						cout << endl << "ENDEREÇO" << endl << endl;
						cout << "Rua: ";
						cin >> aux_4.rua;
						cout << endl << "Número: ";
						cin >> aux_4.numero;
						cout << endl << "Bairro: ";
						cin >> aux_4.bairro;
						cout << endl << "CEP: ";
						cin >> aux_4.CEP;

						cout << "\nDATA DE NASCIMENTO" << endl << endl;
						cout << "Dia: ";
						cin >> aux_5.dia;
						cout << endl << "Mês: ";
						cin >> aux_5.mes;
						cout << endl << "Ano: ";
						cin >> aux_5.ano;

						aux_3.setNome(Nome);
						aux_3.setCPF(CPF);
						aux_3.setEndereco(aux_4);
						aux_3.setDataNas(aux_5);
						system("cls");

						loc.cadastrarCliente(aux_3);

						cout << " _________________________________________________________________ \n";
						cout << "|                   Novo Cliente Cadastrado                       |\n";
						cout << "|_________________________________________________________________|\n";
						break;

					case 5:
						cout << " _________________________________________________________________ \n";
						cout << "|                      Clientes Ativos                            |\n";
						cout << "|_________________________________________________________________|\n";
						loc.consultarClientesAtivos();
						break;

					case 6:
						cout << " _________________________________________________________________ \n";
						cout << "|                    Clientes Cadastrados                         |\n";
						cout << "|_________________________________________________________________|\n";
						loc.consultarClientesCadastrados();
						break;

					case 7:
						cout << " _________________________________________________________________ \n";
						cout << "|                      Adicionar Carro                            |\n";
						cout << "|_________________________________________________________________|\n";
						cout << "Marca : ";
						cin >> Marca;
						cout << endl << "\nModelo : ";
						cin >> Modelo;
						cout << endl << "\nReferêcia :";
						cin >> Referencia;
						cout << endl << "\nCategoria :";
						cin >> Categoria;
						cout << endl << "Cor: ";
						cin >> Cor;
						cout << endl << "Portas :";
						cin >> Portas;

						aux_2.setMarca(Marca);
						aux_2.setModelo(Modelo);
						aux_2.setReferencia(Referencia);
						aux_2.setPortas(Portas);
						aux_2.setCor(Cor);
						aux_2.setCategoria(Categoria);

						loc.adicionarCarro(aux_2);
						break;

					case 8:
						cout << " _________________________________________________________________ \n";
						cout << "|        Qual a referencia do carro que deseja remover?           |\n";
						cout << "|_________________________________________________________________|\n";
						cin >> Referencia;
						loc.removerCarro(Referencia);
						break;

					case 9:
						z = 1;
						break;

					default:
						cout << " _________________________________________________________________ \n";
						cout << "|                      OPÇÃO INVÁLIDA!!!                          |\n";
						cout << "|_________________________________________________________________|\n";
						break;
					}
					system("pause");
					system("cls");
				}
			}
			else
			{
				cout << " _________________________________________________________________ \n";
				cout << "|                 Funcionário Não Cadastrado                      |\n";
				cout << "|_________________________________________________________________|\n";
			}
			break;
		case 4:
			return 0;
			break;
		default:
			cout << " _________________________________________________________________ \n";
			cout << "|                      OPÇÃO INVÁLIDA!!!                          |\n";
			cout << "|_________________________________________________________________|\n";
			break;
		}
		system("pause");
		system("cls");
	}
	while(true);
}
