#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite um número inteiro maior que zero: ";
	int numero;
	for (std::cin >> numero; numero <= 0; std::cin >> numero)
		std::cout << "Por favor, digite um número inteiro maior que zero: ";

	int contador = 0;
	for (int i = 1; i <= numero; i++)
		if (numero % i == 0)
			contador++;

	if (contador == 2)
		std::cout << numero << " é primo." << std::endl;
	else
		std::cout << numero << " não é primo." << std::endl;

	return 0;
}