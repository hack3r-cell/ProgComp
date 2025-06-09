#include <iostream>
#include <fstream>
using namespace std;

struct peixe
{
	char nome[30];
	unsigned peso;
	float comp;
};

int main(void)
{
	system("chcp 1252 > nul");

	const char arquivo[] = "pescado.dat";

	ofstream fout;

	fout.open(arquivo, ios_base::out | ios_base::app | ios_base::binary);

	if (!fout.is_open())
	{
		cout << "A abertura do arquivo " << arquivo << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	peixe p;
	cout << "Digite os dados do peixe:" << endl;

	cout << "Nome: ";
	cin >> p.nome;
	
	cout << "Peso: ";
	cin >> p.peso;

	cout << "Comprimento: ";
	cin >> p.comp;

	cout << "Dados adicionados com sucesso!" << endl;

	fout.write((char *) &p, sizeof(peixe));

	fout.close();

	return 0;
}