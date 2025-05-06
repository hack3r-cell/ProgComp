#include <iostream>
using namespace std;

// protótipo da função
float media(int, int);

int main(void)
{
	system("chcp 1252 > nul");

	int valor1, valor2;
	cout << "Digite um valor inteiro: ";
	cin >> valor1;

	cout << "Digite outro valor inteiro: ";
	cin >> valor2;

	float mediaAritmetica = media(valor1, valor2);
	cout << "A média dos números é " << mediaAritmetica << endl;

	return 0;
}

// definição da função
float media(int x, int y)
{
	return (x + y) / 2.0f;
}