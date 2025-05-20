#include <iostream>

int main(void)
{
	std::cout << "Digite o tamanho do vetor: ";
	int tamanho;
	std::cin >> tamanho;

	std::cout << "Criando vetor para " << tamanho << " inteiros..." << std::endl;
	int * vet = new int[tamanho];
	delete [] vet;

	return 0;
}