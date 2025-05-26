#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	int matriz[4][4] = {
		{ 3, 1, 5, 5 },
		{ 1, 5, 5, 6 },
		{ 2, 3, 4, 5 },
		{ 4, 9, 1, 8 }
	};

	int soma = 0;

	std::cout << "Soma das colunas é: ";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			soma += matriz[j][i];
		std::cout << soma << " ";
		soma = 0;
	}
	std::cout << std::endl;

	return 0;
}