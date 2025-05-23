#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite um texto:" << std::endl;
	char letra;
	std::cin.get(letra);

	while (letra != '@')
	{
		std::cout << letra;
		std::cin.get(letra);
	}

	std::cout << std::endl;

	return 0;
}