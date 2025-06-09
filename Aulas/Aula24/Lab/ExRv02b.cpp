#include <iostream>
#include <fstream>
using namespace std;

struct peixe
{
	char nome[30];
	unsigned peso;
	float comp;
};

ostream& operator<<(ostream&, peixe&);
istream& operator>>(istream&, peixe&);

int main(void)
{
	system("chcp 1252 > nul");

	const char arquivo[] = "pescado.dat";
	ifstream fin;

	fin.open(arquivo, ios_base::in | ios_base::binary);

	if (!fin.is_open())
	{
		cout << "A leitura do arquivo " << arquivo << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	cout << "Aqui está o conteúdo do arquivo:" << endl;
	peixe p;

	while (fin.read((char *) &p, sizeof(peixe)))
		cout << p << endl;

	fin.close();

	cout << "Entre com os dados do peixe: ";
	cin >> p;

	ofstream fout;

	fout.open(arquivo, ios_base::out | ios_base::app | ios_base::binary);

	if (!fout.is_open())
	{
		cout << "A abertura do arquivo " << arquivo << " falhou!" << endl;
		cout << "Program encerrando.\n";
		exit(EXIT_FAILURE);
	}

	cout << "Dados adicionados com sucesso!" << endl;
	fout.write((char *) &p, sizeof(peixe));

	fout.close();

	return 0;
}

ostream& operator<<(ostream &os, peixe &p)
{
	os << p.nome << " " << p.peso << " " << p.comp;
	return os;
}

istream& operator>>(istream &is, peixe &p)
{
	is >> p.nome >> p.peso >> p.comp;
	return is;
}