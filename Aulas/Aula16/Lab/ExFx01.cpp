#include <iostream>

constexpr int tamanho = 12;

int main(void)
{
	system("chcp 1252 > nul");

	const char * meses[tamanho] = {
		"janeiro", "fevereiro", "março", "abril", "maio", "junho",
		"julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
	};
	int vendas[tamanho];
	int totalLivrosVendidos = 0;

	std::cout << "Digite o número de livros vendidos:" << std::endl;
	for (int i = 0; i < tamanho; i++)
	{
		std::cout << meses[i] << ": ";
		std::cin >> vendas[i];
		totalLivrosVendidos = totalLivrosVendidos + vendas[i];
	}

	std::cout << std::endl;

	std::cout << "Em um ano foram vendidos " << totalLivrosVendidos << " livros." << std::endl;

	return 0;
}
