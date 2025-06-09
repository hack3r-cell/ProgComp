#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");

	const char arquivo[] = "interger.bin";

	ifstream fin;

	fin.open(arquivo, ios_base::in | ios_base::binary);

	if (!fin.is_open())
	{
		cout << "A leitura do arquivo " << arquivo << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	int numero;

	fin.read((char *) &numero, sizeof(int));
	if (fin.good())
	{
		fin.close();
		fin.open(arquivo, ios_base::in | ios_base::binary);
		cout << "Arquivo " << arquivo << " encontrado!" << endl;
		while (fin.read((char *) &numero, sizeof(int)))
			cout << "Ele contém o número " << numero << "." << endl;
	}

	fin.close();

	cout << "\nDigite um inteiro: ";
	cin >> numero;

	ofstream fout;

	fout.open(arquivo, ios_base::out | ios_base::app | ios_base::binary);

	if (!fout.is_open())
	{
		cout << "A abertura do arquivo " << arquivo << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	fout.write((char *) &numero, sizeof(int));

	cout << "Número armazenado no arquivo " << arquivo << "." << endl;

	fout.close();

	return 0;
}