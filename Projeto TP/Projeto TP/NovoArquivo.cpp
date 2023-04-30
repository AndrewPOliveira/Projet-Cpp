#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string aux[3];
	ifstream arquivo;
	arquivo.open("testeComposto.txt");
	getline(arquivo,aux[0]);
	getline(arquivo,aux[1]);
	getline(arquivo,aux[2]);
	arquivo.close();
	cout<<aux[0]<<endl<<aux[1]<<endl<<aux[2];
	return 0;
}