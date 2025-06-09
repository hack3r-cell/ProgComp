#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	system("chcp 1252 > nul");

	const char arquivo[] = "pescado.txt";
	unsigned totalQuilos = 0;

	char nome[30];
	unsigned peso;
	float comp;

	ifstream fin;

	fin.open(arquivo);

	if (!fin.is_open())
	{
		cout << "A abertura do arquivo " << arquivo << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	fin >> nome;
	while(!fin.eof())
	{
		fin >> peso;
		fin >> comp;
		totalQuilos += peso;
		fin >> nome;
	}

	cout << "O total de gramas é: " << totalQuilos << endl;

	fin.close();

	return 0;
}
