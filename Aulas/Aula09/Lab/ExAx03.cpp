#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite um número real: ";
	float numeroReal;
	std::cin >> numeroReal;

	int parteInteira = int (numeroReal);
	std::cout << "A parte inteira: " << parteInteira << std::endl;

	float parteFracionaria = numeroReal - parteInteira;
	std::cout << "A parte fracionária: " << parteFracionaria << std::endl;

	return 0;
}