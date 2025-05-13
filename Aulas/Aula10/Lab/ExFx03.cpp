#include <iostream>

double funcao(double []);

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite os três valores para o vetor: ";
	double vetor[3] = { 0.0 };
	std::cin >> vetor[0] >> vetor[1] >> vetor[2];

	std::cout << "Resultado: " << funcao(vetor) << std::endl;

	return 0;
}

double funcao(double vet[])
{
	return vet[0] * vet[2] - vet[1];
}