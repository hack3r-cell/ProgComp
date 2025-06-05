#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	system("chcp 1252 > nul");
	
	const char arquivo[] = "vol.txt";

	ifstream fin;

	fin.open(arquivo);

	if (!fin.is_open())
	{
		cout << "A abertura do arquivo " << arquivo << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	cout << "Informações sobre o meu disco:" << endl;
	char letra;
	fin.get(letra);
	while (!fin.eof())
	{
		cout << letra;
		fin.get(letra);
	}

	fin.close();

	return 0;
}