#include <iostream>
#include <cstring>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite palavras (pronto para parar):" << std::endl;
	char palavra[10] = {};
	std::cin >> palavra;

	int contador = 0;
	while (strcmp(palavra, "pronto"))
	{
		contador++;
		std::cin >> palavra;
	}

	std::cout << "Foram digitadas um total de " << contador << " palavras." << std::endl;

	return 0;
}