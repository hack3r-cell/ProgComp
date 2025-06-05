#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct aluno
{
	char nome[50];
	char turno[3];
};

int main(void)
{
	system("chcp 1252 > nul");

	const char arquivo[20] = "interclasse.txt";
	ifstream fin;

	fin.open(arquivo);

	if (!fin.is_open())
	{
		cout << "A abertura do arquivo " << arquivo << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	char nome[20];
	fin >> nome;
	
	char sobrenome[20];
	fin >> sobrenome;
	
	char turno[3];
	fin >> turno;

	int quantidade = 0;
	while (!fin.eof())
	{
		quantidade++;
		fin >> nome;
		fin >> sobrenome;
		fin >> turno;
	}

	fin.close();

	fin.open(arquivo);

	aluno * alunos = new aluno[quantidade];
	char * nomeCompleto = new char[30]{};

	for (int i = 0; i < quantidade; i++)
	{
		fin >> nome;
		fin >> sobrenome;
		strcpy(nomeCompleto, nome);
		strcat(nomeCompleto, " ");
		strcat(nomeCompleto, sobrenome);
		strcpy(alunos[i].nome, nomeCompleto);
		fin >> turno;
		strcpy(alunos[i].turno, turno);
	}

	delete [] nomeCompleto;
	fin.close();

	cout << "Matutino 6a Série" << endl;
	cout << "-----------------" << endl;
	for (int i = 0; i < quantidade; i++)
		if (alunos[i].turno[0] == 'M' && alunos[i].turno[1] == '6')
			cout << alunos[i].nome << "\t" << alunos[i].turno << endl;
	cout << endl;
	
	cout << "Matutino 7a Série" << endl;
	cout << "-----------------" << endl;
	for (int i = 0; i < quantidade; i++)
		if (alunos[i].turno[0] == 'M' && alunos[i].turno[1] == '7')
			cout << alunos[i].nome << "\t" << alunos[i].turno << endl;
	cout << endl;

	cout << "Matutino 8a Série" << endl;
	cout << "-----------------" << endl;
	for (int i = 0; i < quantidade; i++)
		if (alunos[i].turno[0] == 'M' && alunos[i].turno[1] == '8')
			cout << alunos[i].nome << "\t" << alunos[i].turno << endl;
	cout << endl;

	cout << "Vespertino 6a Série" << endl;
	cout << "-------------------" << endl;
	for (int i = 0; i < quantidade; i++)
		if (alunos[i].turno[0] == 'T' && alunos[i].turno[1] == '6')
			cout << alunos[i].nome << "\t" << alunos[i].turno << endl;
	cout << endl;

	cout << "Vespertino 7a Série" << endl;
	cout << "-------------------" << endl;
	for (int i = 0; i < quantidade; i++)
		if (alunos[i].turno[0] == 'T' && alunos[i].turno[1] == '7')
			cout << alunos[i].nome << "\t" << alunos[i].turno << endl;
	cout << endl;

	cout << "Vespertino 8a Série" << endl;
	cout << "-------------------" << endl;
	for (int i = 0; i < quantidade; i++)
		if (alunos[i].turno[0] == 'T' && alunos[i].turno[1] == '8')
			cout << alunos[i].nome << "\t" << alunos[i].turno << endl;
	cout << endl;

	delete [] alunos;

	return 0;
}