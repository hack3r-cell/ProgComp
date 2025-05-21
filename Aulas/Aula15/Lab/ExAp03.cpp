#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Quantos valores deseja guarda? ";
	int valores;
	std::cin >> valores;

	int * vetor = new int[valores];

	std::cout << "Quais os valores? ";
	for (int i = 0; i < valores; i++)
	{
		std::cin >> vetor[i];
	}

	std::cout << "Os valores ";
	for (int i = 0; i < valores; i++)
	{
		if (i == (valores - 2))
			std::cout << vetor[i] << " e ";
		else if (i == (valores - 1))
			std::cout << vetor[i];
		else
			std::cout << vetor[i] << ", ";
	}

	std::cout << " foram armazenados." << std::endl;

	delete [] vetor;

	return 0;
}