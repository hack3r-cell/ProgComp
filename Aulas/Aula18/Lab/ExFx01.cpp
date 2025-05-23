#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite números inteiros (0 para finalizar):" << std::endl;
	int soma = 0;
	int numero;
	std::cin >> numero;

	while (numero != 0)
	{
		soma += numero;
		std::cout << "Soma parcial: " << soma << std::endl;
		std::cin >> numero;
	}

	return 0;
}