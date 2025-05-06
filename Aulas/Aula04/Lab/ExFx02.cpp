#include <iostream>
using namespace std;

// protótipos das funções

void linha(void);
void pequena(void);
void media(void);
void grande(void);

int main(void)
{
	system("chcp 1252 > nul");

	pequena();
	cout << endl;
	media();
	cout << endl;
	grande();
	cout << endl;
	cout << "Programação de Computadores" << endl;
	grande();
	cout << endl;
	media();
	cout << endl;
	pequena();
	cout << endl;

	return 0;
}

// definições das funções

void linha(void)
{
	cout << "----------";
	return;
}

void pequena(void)
{
	linha();
	return;
}

void media(void)
{
	linha();
	linha();
	return;
}

void grande(void)
{
	linha();
	linha();
	linha();
	return;
}