#include <iostream>

void exibirMatriz(int **, int, int);

int main(void)
{
	// Alocando memória 
	int** matriz = new int* [3];
	for (int i = 0; i < 3; i++)
		matriz[i] = new int[2] {};

	int ** transposta = new int * [2];
	for (int i = 0; i < 2; i++)
		transposta[i] = new int[3] {};

	// Lendo a matriz
	std::cout << "Digite os valores para a matriz 3x2:" << std::endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			std::cin >> matriz[i][j];

	// Colocando os valores na matriz transposta
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			transposta[i][j] = matriz[j][i];

	// Exibindo as matrizes
	exibirMatriz(matriz, 3, 2);
	std::cout << std::endl;
	exibirMatriz(transposta, 2, 3);



	// Liberando a memória
	for (int i = 0; i < 3; i++)
		delete [] matriz[i];
	delete [] matriz;

	for (int i = 0; i < 2; i++)
		delete [] transposta[i];
	delete [] transposta;

	return 0;
}

void exibirMatriz(int ** matriz, int linhas, int colunas)
{
	std::cout << "Exibindo matriz " << linhas << "x" << colunas << ":" << std::endl;
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
			std::cout << matriz[i][j] << " ";
		std::cout << std::endl;
	}
	return;
}