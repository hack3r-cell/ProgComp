#include <iostream>

struct ASCII
{
	char ch;
	int num;
};

ASCII * converteEmASCII(char, int);

int main(void)
{
	system("chcp 1252 > nul");
	
	std::cout << "Digite um caractere e um número: ";
	int numero;
	char ch;
	std::cin >> ch >> numero;

	ASCII * pascii = converteEmASCII(ch, numero);
	std::cout << "O caractere e o intero são respectivamente: " << pascii->ch << " e ";
	std::cout << pascii->num << "." << std::endl;

	delete pascii;

	return 0;
}

ASCII * converteEmASCII(char c, int n)
{
	ASCII* pa = new ASCII;
	pa->ch = c;
	pa->num = n;
	return pa;
}