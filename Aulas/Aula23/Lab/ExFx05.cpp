#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Digite o nome do arquivo: ";
	char arquivo[100];
	cin.getline(arquivo, 100);

	ifstream fin;
	fin.open(arquivo);

	if (!fin.is_open())
	{
		cout << "A abertura do arquivo: " << arquivo << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	cout << "Palavra: ";
	char palavra[100];
	cin.getline(palavra, 100);

	char texto[100];
	fin >> texto;
	
	bool estaNoTexto = strcmp(palavra, texto);
	while (!fin.eof() && estaNoTexto)
	{
		fin >> texto;
		estaNoTexto = strcmp(palavra, texto);
	}

	if (estaNoTexto)
		cout << "A palavra \"" << palavra << "\" não está presente no texto." << endl;
	else
		cout << "A palavra \"" << palavra << "\" está presente no texto." << endl;

	fin.close();

	return 0;
}