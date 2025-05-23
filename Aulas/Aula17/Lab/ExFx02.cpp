#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Enter com o número de linhas: ";
	int linhas;
	std::cin >> linhas;

	int pontos = linhas - 1;
	int asterisco = linhas - pontos;
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < pontos; j++)
			std::cout << ". ";
		for (int j = 0; j < asterisco; j++)
			std::cout << "* ";
		std::cout << std::endl;
		pontos--;
		asterisco++;
	}

	return 0;
}