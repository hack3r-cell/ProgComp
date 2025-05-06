#include <iostream>
#include <cmath>
using namespace std;

// protótipo da função
int absoluto(int);

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Digite um número inteiro: ";
	int numero;
	cin >> numero;

	cout << "O valor absoluto é " << absoluto(numero) << "." << endl;

	return 0;
}

// definição da função
int absoluto(int numero)
{
	return sqrt(pow(numero, 2));
}