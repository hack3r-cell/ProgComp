#include <iostream>

int somaInteiros(int, int, int);

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite três números inteiros a, b e c (\"a\" maior que 1):" << std::endl;
	int a, b, c;
	for (std::cin >> a; a < 1; std::cin >> a)
		std::cout << "Digite um número maior que 1: ";
	std::cin >> b >> c;

	std::cout << "A soma é igual a " << somaInteiros(a, b, c) << "." << std::endl;

	return 0;
}

int somaInteiros(int a, int b, int c)
{
	int soma = 0;
	for (int i = b; i <= c; i++)
		if (i % a == 0)
			soma += i;
	return soma;
}