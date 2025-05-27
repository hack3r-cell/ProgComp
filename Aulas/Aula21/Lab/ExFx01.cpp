#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

constexpr int tamanhoNome = 20;

struct contribuinte
{
	char nome[tamanhoNome];
	int valor;
};

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite o número de contribuintes: ";
	int quantidade;
	std::cin >> quantidade;
	std::cin.ignore();

	contribuinte * contribuintes = new contribuinte[quantidade];
	for (int i = 0; i < quantidade; i++)
	{
		std::cout << "#" << i + 1 << std::endl;
		std::cout << "Nome : ";
		std::cin.getline(contribuintes[i].nome, tamanhoNome);
		std::cout << "Valor: ";
		std::cin >> contribuintes[i].valor;
		std::cin.ignore();
	}

	int quantidadeGrandesPatronos = 0;
	int quantidadePatronos = 0;
	int valorClassificacao = 10000;

	for (int i = 0; i < quantidade; i++)
	{
		if (contribuintes[i].valor >= valorClassificacao)
			quantidadeGrandesPatronos++;
		else
			quantidadePatronos++;
	}

	std::cout << std::endl << "Grandes Patronos" << std::endl;
	if (quantidadeGrandesPatronos > 0)
	{
		contribuinte * grandesPatronos = new contribuinte[quantidadeGrandesPatronos];
		int j = 0;
		for (int i = 0; i < quantidade; i++)
		{
			if (contribuintes[i].valor >= valorClassificacao)
			{
				strcpy(grandesPatronos[j].nome, contribuintes[i].nome);
				grandesPatronos[j++].valor = contribuintes[i].valor;
			}
		}
		for (int i = 0; i < quantidadeGrandesPatronos; i++)
			std::cout << grandesPatronos[i].nome << " " << grandesPatronos[i].valor << std::endl;
		delete [] grandesPatronos;
	}
	else
	{
		std::cout << "Nenhum" << std::endl;
	}

	std::cout << std::endl << "Patronos" << std::endl;
	if (quantidadePatronos > 0)
	{
		contribuinte * patronos = new contribuinte[quantidadePatronos];	
		int j = 0;
		for (int i = 0; i < quantidade; i++)
		{
			if (contribuintes[i].valor < valorClassificacao)
			{
				strcpy(patronos[j].nome, contribuintes[i].nome);
				patronos[j++].valor = contribuintes[i].valor;
			}
		}
		for (int i = 0; i < quantidadePatronos; i++)
			std::cout << patronos[i].nome << " " << patronos[i].valor << std::endl;
		delete [] patronos;
	}
	else
	{
		std::cout << "Nenhum" << std::endl;
	}

	delete [] contribuintes;

	return 0;
}