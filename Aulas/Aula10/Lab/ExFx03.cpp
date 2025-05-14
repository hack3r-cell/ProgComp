#include <iostream>

int soma(int []);

int main(void)
{
	system("chcp 1252 > nul");
	constexpr int tamanho = 5;
	
	std::cout << "Digite " << tamanho << " valores: ";
	int vetor[tamanho] = { 0 };
	std::cin >> vetor[0] >> vetor[1] >> vetor[2] >> vetor[3] >> vetor[4];

	std::cout << "A soma do vetor é " << soma(vetor) << "." << std::endl;

	return 0;
}

int soma(int vet[])
{
	return vet[0] + vet[1] + vet[2] + vet[3] + vet[4];
}