#include <iostream>

enum mes {Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez};

std::istream& operator>>(std::istream&, mes&);

int main(void)
{
	system("chcp 1252 > nul");

	mes inicio, fim;

	inicio = Mar;
	fim    = Jun;

	std::cout << "Digite o número do mês atual: ";
	mes atual;
	std::cin >> atual;

	if ((atual >= inicio) && (atual <= fim))
		std::cout << "Você está em período de aulas." << std::endl;
	else
		std::cout << "Férias!" << std::endl;

	return 0;
}

std::istream& operator>>(std::istream& is, mes& m)
{
	int temp;
	is >> temp;
	m = (mes) temp;
	return is;
}