#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

constexpr float precoLimite = 1000.00f;
constexpr int tamanho = 20;

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Loja de Informática" << std::endl;
	std::cout << "-------------------" << std::endl;

	std::cout << "Produto: ";
	char produto[tamanho];
	std::cin.getline(produto, tamanho);

	std::cout << "Preço: ";
	float preco;
	std::cin >> preco;
	std::cin.ignore();
	std::cout << "-------------------" << std::endl;

	std::cout << "Deseja continuar [S/N]? ";
	char escolha;
	std::cin.get(escolha);
	std::cin.ignore();

	float total = 0.0f;
	int maisDeMil = 0;

	char produtoMaisCaro[tamanho];
	strcpy(produtoMaisCaro, produto);
	float precoMaisCaro = preco;

	total += preco;
	while (escolha == 's' || escolha == 'S')
	{
		std::cout << std::endl;
		std::cout << "-------------------" << std::endl;

		std::cout << "Produto: ";
		std::cin.getline(produto, tamanho);
		
		std::cout << "Preço: ";
		std::cin >> preco;
		std::cin.ignore();

		std::cout << "Deseja continuar [S/N]? ";
		std::cin.get(escolha);
		std::cin.ignore();

		total += preco;

		if (preco >= precoLimite)
			maisDeMil++;

		if (preco > precoMaisCaro)
		{
			strcpy(produtoMaisCaro, produto);
			precoMaisCaro = preco;
		}
	}

	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << "Total da compra: R$" << total << std::endl;
	std::cout << maisDeMil << " produtos custam mais de R$" << precoLimite << "." << std::endl;
	std::cout << produtoMaisCaro << " é o produto mais caro." << std::endl;
	
	return 0;
}