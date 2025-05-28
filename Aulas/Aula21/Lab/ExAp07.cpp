#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct nadador
{
	char nome[20];
	unsigned idade;
	char categoria[20];
};

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite o seu nome: ";
	nadador novato = {};
	std::cin.getline(novato.nome, 20);

	std::cout << "Digite a sua idade: ";
	std::cin >> novato.idade;

	if (novato.idade >= 5 && novato.idade <= 7)
		strcpy(novato.categoria, "Infantil");
	else if (novato.idade >= 8 && novato.idade <= 10)
		strcpy(novato.categoria, "Juvenil");
	else if (novato.idade >= 11 && novato.idade <= 15)
		strcpy(novato.categoria, "Adolescente");
	else if (novato.idade >= 16 && novato.idade <= 30)
		strcpy(novato.categoria, "Adulto");
	else
		strcpy(novato.categoria, "Sênior");

	std::cout << "A sua categoria é: " << novato.categoria << std::endl;


	return 0;
}