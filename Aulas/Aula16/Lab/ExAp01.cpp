#include <iostream>
#include <cstring>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite jogador/time: ";
	char texto[20]{};
	std::cin >> texto;

	char jogador[6]{};
	char *pc;

	int i = 0;
	for (; texto[i] != '/'; i++)
		jogador[i] = texto[i];

	pc = &texto[++i];
	char time[8]{};

	for (i = 0; pc[i]; i++)
		time[i] = pc[i];

	std::cout << "O nome do jogador tem " << strlen(jogador) << " letras." << std::endl;
	std::cout << "O seu time é o " << time << "." << std::endl;

	return 0;
}