#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	double vetor[10] = {};

	std::cout << "Digite até 10 valores de donativos (zero para encerrar):" << std::endl;
	double numero;
	int i = 0;
	for (std::cin >> numero; numero != 0 && i < 10; std::cin >> numero)
		vetor[i++] = numero;

	double media = 0.0;
	for (int j = 0; j < i; j++)
		media += vetor[j];
	media /= i;

	int acimaMedia = 0;
	for (int j = 0; j < i; j++)
		if (vetor[j] > media)
			acimaMedia++;

	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << "A média dos valores doados foi de R$ " << media << std::endl;
	std::cout << acimaMedia << " valores foram maiores que a média." << std::endl;

	return 0;
}