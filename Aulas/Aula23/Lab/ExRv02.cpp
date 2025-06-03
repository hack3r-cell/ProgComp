#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	ifstream fin;
	fin.open("sol.txt");
	if (!fin.is_open())
	{
		cout << "Abertura do arquivo sol.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	ofstream fout;
	fout.open("num.txt");
	if (!fout.is_open())
	{
		cout << "Abertura do arquivo num.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	char palavra[100]{};
	int num{};
	fin >> num;
	while (!fin.eof())
	{
		if (fin.good())
			fout << num << endl;
		else
		{
			fin.clear();
			fin >> palavra;
		}
		fin >> num;
	}

	fin.close();
	fout.close();

	cout << "Pronto!" << endl;

	return 0;
}