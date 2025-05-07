#include <iostream>
using namespace std;

// protótipo da função
int reajustarSalario(int);

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Salário atual: ";
	int salario;
	cin >> salario;

	salario = reajustarSalario(salario);
	cout << "Salário reajustado para para R$" << salario << endl;

	return 0;
}

// definição da função
int reajustarSalario(int salario)
{
	return salario + (salario * 15 / 100);
}