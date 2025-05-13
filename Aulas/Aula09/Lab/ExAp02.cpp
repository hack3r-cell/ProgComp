#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite dois números inteiros: ";
	int numero1, numero2;
	std::cin >> numero1 >> numero2;

	std::cout << "O quociente " << numero1 << " / " << numero2 << " é " << numero1 / numero2;
	std::cout << std::endl;
	std::cout << "O resto da divisão " << numero1 << " % " << numero2 << " é " << numero1 % numero2;
	std::cout << std::endl;

	return 0;
}