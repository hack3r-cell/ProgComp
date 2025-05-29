#include <iostream>
#include <cctype>

constexpr int tamanho = 3;

struct prato
{
	char nome[20];
	float preco;
};

void cardapio(prato *, int);

int main(void)
{
	system("chcp 1252 > nul");

	prato * pratos = new prato[tamanho] {
		{ "Hamburge", 30.00f },
		{ "Pizza", 25.00f },
		{ "Bolo", 50.00f }
	};

	float total = 0.00f;

	cardapio(pratos, tamanho);

	std::cout << "Escolha [ s ] - para sair: ";
	char escolha;
	std::cin.get(escolha);
	std::cin.ignore();
	escolha = tolower(escolha);
	
	while (escolha != 's')
	{
		while (!(isdigit(escolha)))
		{
			std::cout << "Por favor, digite um número: ";
			std::cin.get(escolha);
			std::cin.ignore();
		}
		int opcao = escolha - '0';
		opcao--;
		
		switch (opcao)
		{
			case 0:
			case 1:
			case 2: total += pratos[opcao].preco; break;
			default: std::cout << "Opção Inválida!" << std::endl;
		}
		
		std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
		std::cout.precision(2);
		std::cout << "Sua conta até agora: R$ " << total << std::endl << std::endl;
		std::cout << "Escolha [ s ] - para sair: ";
		std::cin.get(escolha);
		std::cin.ignore();
	}

	std::cout << "Total a pagar: R$ " << total << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "Tchau!" << std::endl;

	delete [] pratos;

	return 0;
}

void cardapio(prato * p, int tam)
{
	std::cout << "Cardápio" << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	for (int i = 0; i < tam; i++)
	{
		std::cout << "#" << i + 1 << " ";
		std::cout << std::left;
		std::cout.width(9);
		std::cout << p[i].nome;
		std::cout << " R$ " << p[i].preco << std::endl;
	}
	std::cout << "------------------------------" << std::endl;
	return;
}