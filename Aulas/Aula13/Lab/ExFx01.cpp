#include <iostream>

union cor
{
	int numero;
	char codigo[5];
	char nome[20];
};

struct carro
{
	char modelo[20];
	int anoFabricacao;
	cor cor;
	float preco;
};

int main(void)
{
	system("chcp 1252 > nul");

	carro carros[10] = {};

	carros[0] = { "Vectra", 2009, 'a', 58'000.00f};
	carros[0].cor.nome[0] = { 'A' };
	carros[0].cor.nome[1] = { 'z' };
	carros[0].cor.nome[2] = { 'u' };
	carros[0].cor.nome[3] = { 'l' };
	carros[0].cor.nome[4] = { '\0' };

	carros[1] = { "Polo", 2008, 'p', 45'000.00f };
	carros[1].cor.nome[0] = { 'P'};
	carros[1].cor.nome[1] = { 'r' };
	carros[1].cor.nome[2] = { 'e' };
	carros[1].cor.nome[3] = { 't' };
	carros[1].cor.nome[4] = { 'o' };
	carros[1].cor.nome[5] = { '\0' };

	std::cout << "Entre com os dados do carro" << std::endl << std::endl;
	std::cout << "Modelo           : ";
	std::cin >> carros[2].modelo;
	std::cout << "Ano de fabricação: ";
	std::cin >> carros[2].anoFabricacao;
	std::cout << "Cor do carro     : ";
	std::cin >> carros[2].cor.nome;
	std::cout << "Preço            : R$";
	std::cin >> carros[2].preco;

	std::cout << std::endl << std::endl <<"Carros cadastrados:" << std::endl;
	std::cout << "------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "\tCarro #01" << std::endl;
	std::cout << "Modelo           : " << carros[0].modelo << std::endl;
	std::cout << "Ano de fabricação: " << carros[0].anoFabricacao << std::endl;
	std::cout << "Cor              : " << carros[0].cor.nome << std::endl;
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << "Preço            : R$" << carros[0].preco << std::endl;
	std::cout << "------------------------------------------------------------------------------------------" << std::endl;


	std::cout << "\tCarro #02" << std::endl;
	std::cout << "Modelo           : " << carros[1].modelo << std::endl;
	std::cout << "Ano de fabricação: " << carros[1].anoFabricacao << std::endl;
	std::cout << "Cor              : " << carros[1].cor.nome << std::endl;
	std::cout << "Preço            : R$" << carros[1].preco << std::endl;
	std::cout << "------------------------------------------------------------------------------------------" << std::endl;

	std::cout << "\tCarro #03" << std::endl;
	std::cout << "Modelo           : " << carros[2].modelo << std::endl;
	std::cout << "Ano de fabricação: " << carros[2].anoFabricacao << std::endl;
	std::cout << "Cor              : " << carros[2].cor.nome << std::endl;
	std::cout << "Preço            : R$" << carros[2].preco << std::endl;
	std::cout << "-----------------------------------------------------------------------------------------" << std::endl;

	return 0;
}