#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite um número entre 0-10: ";
	int numero;
	std::cin >> numero;

	// Usando o for
	//for (std::cin >> numero; numero != 7; std::cin >> numero)
	//	std::cout << "Número errado, tente novamente: ";

	// Usando while
	while (numero != 7)
	{
		std::cout << "Número errado, tente novamente: ";
		std::cin >> numero;
	}
	std::cout << "Sim, 7 é meu número favorito." << std::endl;

	return 0;
}