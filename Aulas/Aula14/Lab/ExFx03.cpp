#include <iostream>

void mais(int*);
int incrementa(int);

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite um valor: ";
	int numero;
	std::cin >> numero;

	mais(&numero);
	std::cout << std::endl << "Resultado após mais: " << numero << std::endl;
	numero = incrementa(numero);
	std::cout << "Resultado após incrementa: " << numero << std::endl;

	return 0;
}

void mais(int* ptr)
{
	*ptr = *ptr + 1;
	return;
}

int incrementa(int n)
{
	n = n + 1;
	return n;
}