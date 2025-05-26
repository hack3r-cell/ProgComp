#include <iostream>

void exibir(char);

int main(void)
{
	std::cout << "Digite um caractere: ";
	char caractere;
	std::cin >> caractere;

	exibir(caractere);
	std::cout << "Programando em C++" << std::endl;
	exibir(caractere);

	return 0;
}

void exibir(char ch)
{
	for (int i = 0; i < 20; i++)
		std::cout << ch;
	std::cout << std::endl;
	return;
}