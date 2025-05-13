#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Aposta dos Amigos" << std::endl;
	std::cout << "-----------------" << std::endl;
	
	std::cout << "Digite a quantia apostada pelo jogador 1: ";
	float aposta1;
	std::cin >> aposta1;

	std::cout << "Digite a quantia apostada pelo jogador 2: ";
	float aposta2;
	std::cin >> aposta2;

	std::cout << "Entre com o valor do prêmio: ";
	int premio;
	std::cin >> premio;

	int valorJogador1 = (premio / (aposta1 + aposta2)) * aposta1;
	std::cout << "O jogador 1 tem direito a R$" << valorJogador1 << std::endl;

	int valorJogador2 = (premio / (aposta1 + aposta2)) * aposta2;
	std::cout << "O jogador 2 tem direito a R$" << valorJogador2 << std::endl;
	return 0;
}