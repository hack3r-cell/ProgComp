#include <iostream>

struct jogador
{
	char nome[25];
	int numero;
};

struct gol
{
	jogador jog;
	int hora, min;
};

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite os dados dos 3 últimos gols:" << std::endl;
	gol gols[3] = {};

	std::cout << "Gol: ";
	std::cin >> gols[0].jog.nome >> gols[0].jog.numero;
	std::cin >> gols[0].hora;
	std::cin.ignore();
	std::cin >> gols[0].min;

	std::cout << "Gol: ";
	std::cin >> gols[1].jog.nome >> gols[1].jog.numero;
	std::cin >> gols[1].hora;
	std::cin.ignore();
	std::cin >> gols[1].min;

	std::cout << "Gol: ";
	std::cin >> gols[2].jog.nome >> gols[2].jog.numero;
	std::cin >> gols[2].hora;
	std::cin.ignore();
	std::cin >> gols[2].min;

	std::cout << std::endl << std::endl << "Gols vistos:" << std::endl;
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "\tGol #01" << std::endl;
	std::cout << "Nome do jogador : " << gols[0].jog.nome << std::endl;
	std::cout << "Número da camisa: " << gols[0].jog.numero << std::endl;
	std::cout << "Tempo           : " << gols[0].hora << ":" << gols[0].min << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;

	std::cout << "\tGol #02" << std::endl;
	std::cout << "Nome do jogador : " << gols[1].jog.nome << std::endl;
	std::cout << "Número da camisa: " << gols[1].jog.numero << std::endl;
	std::cout << "Tempo           : " << gols[1].hora << ":" << gols[0].min << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;

	std::cout << "\tGol #03" << std::endl;
	std::cout << "Nome do jogador : " << gols[2].jog.nome << std::endl;
	std::cout << "Número da camisa: " << gols[2].jog.numero << std::endl;
	std::cout << "Tempo           : " << gols[2].hora << ":" << gols[0].min << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;

	return 0;
}