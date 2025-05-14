#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main(void)
{
	constexpr int tamanho = 20;

	std::cout << "Nome: ";
	char nome[tamanho];
	std::cin.getline(nome, tamanho);

	std::cout << "Data: ";
	char data[tamanho];
	std::cin.getline(data, tamanho);

	char frase[tamanho * 3];
	strcpy(frase, nome);
	strcat(frase, " esteve aqui ");
	strcat(frase, data);

	std::cout << frase << "." << std::endl;

	return 0;
}