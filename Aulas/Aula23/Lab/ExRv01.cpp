#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	ifstream fin;
	fin.open("intro.txt");

	if (!fin.is_open())
	{
		cout << "Abertura do arquivo falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	// a) O oitavo caractere
	//char ch;
	//for (int i = 0; i < 8; i++)
	//	fin >> ch;
	//cout << ch << endl;
	
	// b) Um palavra
	// char palavra[50]{};
	// fin >> palavra;
	// cout << palavra << endl;

	// c) A quinta palavra
	//char palavra[50]{};
	//for (int i = 0; i < 5; i++)
	//	fin >> palavra;
	//cout << palavra << endl;

	// d) Uma linha
	//char linha[100]{};
	//fin.getline(linha, 100);
	//cout << linha << endl;

	fin.close();


	return 0;
}