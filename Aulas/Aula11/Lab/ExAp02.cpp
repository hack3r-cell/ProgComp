#include <iostream>
#include <cstdlib>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Entre com dois números: ";
	char numero1[5];
	int numero2;
	std::cin >> numero1 >> numero2;

	int multiplicacao = atoi(numero1) * numero2;
	std::cout << "A multiplicação entre eles é " << multiplicacao << "." << std::endl;

	return 0;
}