#include <iostream>
#include <cstring>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite um palavra: ";
	char palavra[30] = {};
	std::cin >> palavra;
	
	int tamanho = 0;
	for (int i = 0; palavra[i]; i++)
		tamanho++;

	char invertida[30] = {};
	for (int i = tamanho - 1, j = 0; i > -1; i--, j++)
		invertida[j] = palavra[i];

	std::cout << "Palavra invertida: " << invertida << std::endl;

	if (strcmp(palavra, invertida))
		std::cout << "A palavra não é um palíndromo." << std::endl;
	else
		std::cout << "A palavra é um palíndromo." << std::endl;

	return 0;
}