#include <iostream>
#include <fstream>
using namespace std;

struct peixe
{
	char nome[30];
	unsigned peso;
	float comp;
};

int main()
{
	system("chcp 1252 > nul");

	const char arq1[] = "pescado.txt";
	const char arq2[] = "pescado.bin";

	ifstream fin;

	unsigned tam = 0;
	fin.open(arq1);

	if (!fin.is_open())
	{
		cout << "A leitura do arquivo " << arq1 << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	peixe * p = new peixe;

	fin >> p->nome;
	while (!fin.eof())
	{
		fin >> p->peso;
		fin >> p->comp;
		tam++;
		fin >> p->nome;
	}

	delete p;
	fin.close();

	peixe * peixes = new peixe[tam];
	
	fin.open(arq1);

	if (!fin.is_open())
	{
		cout << "A leitura do arquivo " << arq1 << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < tam; i++)
	{
		fin >> peixes[i].nome;
		fin >> peixes[i].peso;
		fin >> peixes[i].comp;
	}

	fin.close();

	ofstream fout;

	fout.open(arq2, ios_base::out | ios_base::app | ios_base::binary);

	if (!fout.is_open())
	{
		cout << "A leitura do arquivo " << arq2 << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < tam; i++)
		fout.write((char *) &peixes[i], sizeof(peixe));

	fout.close();
	
	delete [] peixes;

	return 0;
}