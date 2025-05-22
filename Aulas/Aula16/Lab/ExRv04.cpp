#include <iostream>

struct jogador
{
	char nome[20];
	float salario;
	unsigned gols;
};

void exibir(jogador[], int);

int main(void)
{
	system("chcp 1252 > nul");

	jogador * jogadores = new jogador[23];

	*jogadores = { "Bebeto", 200000.00f, 600 };
	*(jogadores + 1) = { "Romário", 250000.00f, 700 };
	exibir(jogadores, 2);

	delete [] jogadores;

	return 0;
}

void exibir(jogador vet[], int tam)
{
	for (int i = 0; i < tam; i++)
		std::cout << vet[i].nome << " " << vet[i].salario << " " << vet[i].gols << std::endl;
	std::cout << std::endl;
	return;
}