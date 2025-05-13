#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	double x1, x2;
	std::cout << "Digite o valor x1: ";
	std::cin >> x1;

	std::cout << "Digite o valor x2: ";
	std::cin >> x2;

	int soma = int (x1) + int (x2);
	std::cout << "A adição inteira dos valores é " << soma << "." << std::endl;

	return 0;
}