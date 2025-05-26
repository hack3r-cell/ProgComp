#include <iostream>

void exibir(int[], int);

int main(void)
{
	int matriz[2][3] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 }
	};

	int tamanho = sizeof(matriz[0]) / sizeof(matriz[0][0]);
	exibir(matriz[0], tamanho);

	return 0;
}

void exibir(int mat[], int tamanho)
{
	for (int i = 0; i < tamanho; i++)
		std::cout << mat[i] << " ";
	std::cout << std::endl;
	return;
}