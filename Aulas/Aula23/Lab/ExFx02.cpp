#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(void)
{
	system("chcp 1252 > nul");

	const char arquivo[] = "alunos.txt";

	char alunos[12][100]{};

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
		char nome[20]{};
		float nota = 0.0f;
		int i = 0;
		fin >> nota;
		while (!fin.eof())
		{
			if (!fin.good())
			{
				fin.clear();
				fin >> nome;
				int cont = 0;
				float media = 0.0f;
				for (; cont < 4; cont++)
				{
					fin >> nota;
					media += nota;
				}
				media /= cont;
				cout.setf(ios_base::fixed, ios_base::floatfield);
				cout.precision(1);
				char buff[100];
				snprintf(buff, 100, "O aluno %s tem média: %.1f\n", nome, media);
				strcpy(alunos[i++], buff);
			}
			fin >> nota;
		}
	}

	fin.close();

	ofstream fout;
	fout.open("medias.txt");
	for (int i = 0; i < 12; i++)
		fout << alunos[i];

	fout.close();

	return 0;
}