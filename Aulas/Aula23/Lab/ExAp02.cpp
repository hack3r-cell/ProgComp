#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;

bool ePalindromo(const char *);

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Digite o nome do arquivo: ";
	char arquivo[30];
	cin.getline(arquivo, 30);

	ifstream fin;
	fin.open(arquivo);

	if (!fin.is_open())
	{
		cout << "A abertura do arquivo " << arquivo << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	char palavra[30]{};
	int contador = 0;
	fin >> palavra;
	while (!fin.eof())
	{
		// Negando para fazer sentido com propósito da função
		if (!ePalindromo(palavra))
		{
			cout << palavra << endl;
			contador++;
		}
		fin >> palavra;
	}

	cout << "Foram encontrados " << contador << " palíndromos neste arquivo." << endl;

	fin.close();

	return 0;
}

bool ePalindromo(const char * termo)
{
	int tam;
	char copia[20]{};
	for (tam = 0; termo[tam]; tam++)
		copia[tam] = char (tolower(termo[tam]));

	int i = 0;
	char palindromo[20]{};
	for (tam = tam - 1; tam >= 0; tam--)
		palindromo[i++] = copia[tam];

	return strcmp(copia, palindromo);
}