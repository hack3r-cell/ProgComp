#include <iostream>

int main(void)
{
	char matriz[16][16] = {};
	int contador = 0;

	for (int i = 0; i < 16; i++)
		for (int j = 0; j < 16; j++)
			matriz[i][j] = contador++;

	for (int i = 4; i < 7; i++)
	{
		for (int j = 1; j < 8; j++)
			std::cout << matriz[i][j] << " ";
		std::cout << std::endl;
	}

	return 0;
}