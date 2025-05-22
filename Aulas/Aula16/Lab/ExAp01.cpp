#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite jogador/time: ";
	char texto[20] = {};
	std::cin >> texto;

	char *pc;
	int letras = 0;
	
	int i = 0;
	for (; texto[i] != '/'; i++)
		letras++;

	pc = &texto[++i];

	std::cout << "O nome do jogador tem " << letras << " letras." << std::endl;
	std::cout << "O seu time é o " << pc << "." << std::endl;

	return 0;
}
