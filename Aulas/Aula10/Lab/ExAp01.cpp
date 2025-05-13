#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");
	int vetor[5] = { 10, 80, 30, 45, 15 };
	
	std::cout << "Vetor: " << vetor[0] << " " << vetor[1] << " " << vetor[2] << " " << vetor[3];
	std::cout << " " << vetor[4] << std::endl;
	std::cout << "----------------------" << std::endl;

	std::cout << "Alterar posição: ";
	int posicao;
	std::cin >> posicao;

	std::cout << "Novo valor: ";
	int novoValor;
	std::cin >> novoValor;

	vetor[posicao] = novoValor;
	std::cout << "----------------------" << std::endl;
	std::cout << "Vetor: " << vetor[0] << " " << vetor[1] << " " << vetor[2] << " " << vetor[3] << " ";
	std::cout << vetor[4] << std::endl;

	return 0;
}