#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	int matriz[5][5] = {
		{ 38, 51, 50, 56, 98 },
		{ 17, 65, 25, 62, 54 },
		{ 23, 23, 64, 45, 92 },
		{ 41, 39, 19, 68, 87 },
		{ 65, 10, 12, 22, 13 }
	};

	std::cout << "Exibindo os valores da matriz 5x5:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			std::cout << matriz[i][j] << " ";
		std::cout << std::endl;
	}

	float media = 0.0f;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			media += matriz[i][j];
	media /= 25.0f;

	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << "\nA média dos valores é: " << media << std::endl;

	return 0;
}