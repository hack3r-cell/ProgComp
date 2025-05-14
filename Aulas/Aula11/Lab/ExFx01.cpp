#include <iostream>

int main(void)
{
	constexpr int tamanho = 20;

	std::cout << "Primeiro nome? ";
	char primeiroNome[tamanho];
	std::cin >> primeiroNome;

	std::cout << "Segundo nome? ";
	char segundoNome[tamanho];
	std::cin >> segundoNome;

	std::cout << "Bom dia, " << primeiroNome << " " << segundoNome << "." << std::endl;
	std::cout << "Seja bem-vindo " << primeiroNome[0] << segundoNome[0] << "!" << std::endl;

	return 0;
}