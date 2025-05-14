#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");
	constexpr int tamanho = 20;
	
	std::cout << "Qual é o seu nome? ";
	char nome[tamanho];
	std::cin.getline(nome, tamanho);

	std::cout << "Que conceito você merece? ";
	char conceito;
	std::cin.get(conceito);

	conceito = conceito + 1;
	std::cout << std::endl << "Bom dia, " << nome << ". Seu conceito é " << conceito << "." << std::endl;

	return 0;
}