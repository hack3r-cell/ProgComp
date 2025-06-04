#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	system("chcp 1252 > nul");

	const char arquivo[] = "pescado.txt";

	ifstream fin;

	fin.open(arquivo);

	if (!fin.is_open())
	{
		cout << "A abertura do arquivo " << arquivo << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	else
	{
		char peixe[11]{};
		int totalQuilos = 0;
		int quilos = 0;
		int comprimento = 0;
		fin >> quilos;
		while (!fin.eof())
		{

			if (!fin.good())
			{
				fin.clear();
				fin >> peixe;
				fin >> quilos;
				fin >> comprimento;
				totalQuilos += quilos;
			}
			fin >> quilos;
		}
		cout << "O total de quilos de peixe é: " << totalQuilos << " gramas." << endl;
	}

	fin.close();

	return 0;
}