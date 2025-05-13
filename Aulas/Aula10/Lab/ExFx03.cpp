#include <iostream>

int somaVetor(int []);

int main(void)
{
	system("chcp 1252 > nul");
	constexpr int tamanho = 5;

	std::cout << "Digite " << tamanho << " valores: ";
	int vetor[tamanho] = { 0 };
	std::cin >> vetor[0] >> vetor[1] >> vetor[2] >> vetor[3] >> vetor[4];

	std::cout << "A soma do vetor é " << somaVetor(vetor) << "." << std::endl;

	return 0;
}

int somaVetor(int vetor[])
{
	return vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4];
}