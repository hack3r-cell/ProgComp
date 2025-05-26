#include <iostream>

int soma(int, int);

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite um número inteiro: ";
	int numero1;
	std::cin >> numero1;

	std::cout << "Digite outro número inteiro: ";
	int numero2;
	std::cin >> numero2;

	std::cout << "A soma de todos os valores entre " << numero1;
	std::cout << " e " << numero2 << ": " << soma(numero1, numero2) << std::endl;

	return 0;
}

int soma(int a, int b)
{
	int resultado = 0;
	if (a < b)
		for (int i = a + 1; i < b; i++)
			resultado += i;
	else if (a > b)
		for (int i = a - 1; i > b; i--)
			resultado += i;

	return resultado;
}