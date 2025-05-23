#include <iostream>

int somaIntervalo(int, int);

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite os números para o intervalo: ";
	int numero1, numero2;
	std::cin >> numero1 >> numero2;
	std::cout << "A soma do intervalo de " << numero1 << " até " << numero2 << " é igual a: ";
	std::cout << somaIntervalo(numero1, numero2) << std::endl;

	return 0;
}

int somaIntervalo(int num1, int num2)
{
	int soma = 0;
	for (int i = num1; i <= num2; i++)
		soma += i;
	return soma;
}