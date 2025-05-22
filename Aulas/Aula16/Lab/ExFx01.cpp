#include <iostream>

constexpr int mes = 12;
constexpr int tamanhoLetras = 10;

int main(void)
{
	system("chcp 1252 > nul");

	const char meses[mes][tamanhoLetras] = {
		"janeiro", "fevereiro", "março", "abril", "maio", "junho",
		"julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
	};
	int vendas[mes];
	int totalLivrosVendidos = 0;

	std::cout << "Digite o número de livros vendidos:" << std::endl;
	for (int i = 0; i < mes; i++)
	{
		std::cout << meses[i] << ": ";
		std::cin >> vendas[i];
		totalLivrosVendidos = totalLivrosVendidos + vendas[i];
	}

	std::cout << std::endl;

	std::cout << "Em um ano foram vendidos " << totalLivrosVendidos << " livros." << std::endl;

	return 0;
}