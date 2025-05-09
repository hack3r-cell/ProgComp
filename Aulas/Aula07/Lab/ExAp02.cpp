#include <iostream>

void codificar(char);
void decodificar(char);

int main(void)
{
	std::cout << "Digite uma letra: ";
	char ch;
	std::cin >> ch;

	std::cout << "\nDigite:\n[ 0 ] - decodificar\n[ 1 ] - codificar\nEscolha: ";
	bool resposta;
	std::cin >> resposta;

	if (resposta == true)
		codificar(ch);
	else
		decodificar(ch);

	return 0;
}

void codificar(char ch)
{
	ch = ch + 3;
	std::cout << ch << std::endl;
	return;
}

void decodificar(char ch)
{
	ch = ch - 3;
	std::cout << ch << std::endl;
	return;
}