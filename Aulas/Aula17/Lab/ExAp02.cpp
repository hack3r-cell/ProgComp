#include <iostream>

bool ePar(int);

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Você quer que eu conte de 1 até que número? ";
	int numero;
	std::cin >> numero;

	for (int i = 1; i <= numero; i++)
		std::cout << i << " ";
	std::cout << std::endl;

	for (int i = numero; i > 0; i--)
		std::cout << i << " ";
	std::cout << std::endl;

	// contando os valores ímpares crescente
	for (int i = 1; i <= numero; i = i + 2)
		std::cout << i << " ";
	std::cout << std::endl;

	// contado os valores ímpares decrescente
	if (ePar(numero))
	{
		for (int i = numero - 1; i > 0; i = i - 2)
			std::cout << i << " ";
		std::cout << std::endl;
	}
	else
	{
		for (int i = numero; i > 0; i = i - 2)
			std::cout << i << " ";
		std::cout << std::endl;
	}

	// contando os valores pares crescente
	for (int i = 2; i <= numero; i = i + 2)
		std::cout << i << " ";
	std::cout << std::endl;

	// contando os valores pares decrescente
	if (ePar(numero))
	{
		for (int i = numero; i > 1; i = i - 2)
			std::cout << i << " ";
		std::cout << std::endl;
	}
	else
	{
		for (int i = numero - 1; i > 1; i = i - 2)
			std::cout << i << " ";
		std::cout << std::endl;
	}
	return 0;
}

bool ePar(int n)
{
	if (n % 2 == 0)
		return 1;
	return 0;
}