#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite números inteiros (0 para finalizar):" << std::endl;
	int numero;
	std::cin >> numero;
	
	int soma = 0;
	int quantidade = 0;
	
	while (numero != 0)
	{
		soma += numero;
		quantidade++;
		std::cin >> numero;
	}

	float media = float (soma) / quantidade;
	std::cout << "Foram lidos " << quantidade << " números" << std::endl;
	std::cout << "A soma dos números é " << soma << std::endl;
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << "A média é " << media << std::endl;

	return 0;
}