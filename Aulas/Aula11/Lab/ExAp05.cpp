#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	constexpr int tamanho = 20;
	std::cout << "Digite o seu nome e sobrenome: ";
	char nome[tamanho];
	char sobrenome[tamanho];
	std::cin >> nome >> sobrenome;

	std::cout << "Bom dia, senhor " << sobrenome << ". Ou devo chamá-lo de " << nome << "?" << std::endl;

	return 0;
}