#include <iostream>

struct carro
{
	char modelo[20];
	int anoFabricacao;
	float preco;
};

int main(void)
{
	system("chcp 1252 > nul");

	carro carros[10] = 
	{
		{ "Vectra", 2009, 58'000.00f },
		{ "Polo", 2008, 45'000.00f }
	};

	carro* pc = &carros[1];
	std::cout << "Modelo           : " << pc->modelo << std::endl;
	std::cout << "Ano de Fabricação: " << pc->anoFabricacao << std::endl;
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << "Preço            : R$" << pc->preco << std::endl;

	return 0;
}