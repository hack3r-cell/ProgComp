#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	const char * meses[12] = {
		"janeiro",
		"fevereiro",
		"março",
		"abril",
		"maio",
		"junho",
		"julho",
		"agosto",
		"setembro",
		"outubro",
		"novembro",
		"dezembro"
	};
	int vendas[3][12] = {};
	int vendasAnoUm = 0;
	int vendasAnoDois = 0;
	int vendasAnoTres = 0;
	int totalVendas = 0;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Digite o número de livros vendidos no " << i + 1 << "° ano:" << std::endl;
		for (int j = 0; j < 12; j++)
		{
			std::cout << meses[j] << ": ";
			std::cin >> vendas[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (i == 0)
				vendasAnoUm += vendas[i][j];
			else if (i == 1)
				vendasAnoDois += vendas[i][j];
			else
				vendasAnoTres += vendas[i][j];
		}
	}

	totalVendas = vendasAnoUm + vendasAnoDois + vendasAnoTres;
	std::cout << std::endl << "Total de vendas:" << std::endl;
	std::cout << "1o ano: " << vendasAnoUm << std::endl;
	std::cout << "2o ano: " << vendasAnoDois << std::endl;
	std::cout << "3o ano: " << vendasAnoTres << std::endl;

	std::cout << std::endl << "Nos três anos foram vendidos " << totalVendas << " livros." << std::endl;

	return 0;
}