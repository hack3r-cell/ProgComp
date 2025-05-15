#include <iostream>

struct chocolate
{
	char marca[40];
	float peso;
	int calorias;
};

int main(void)
{
	system("chcp 1252 > nul");

	chocolate chocolates[3] = {
		{ "KitKat", 41.05f, 518 },
		{ "Charge", 40.00f, 95 },
		{ "Prestígio", 33.00f, 153 }
	};

	std::cout << "Chocolate #1" << std::endl;
	std::cout << "Marca   : " << chocolates[0].marca << std::endl;
	std::cout << "Peso    : " << chocolates[0].peso << std::endl;
	std::cout << "Calorias: " << chocolates[0].calorias << std::endl;
	std::cout << "--------------------------" << std::endl;

	std::cout << "Chocolate #2" << std::endl;
	std::cout << "Marca   : " << chocolates[1].marca << std::endl;
	std::cout << "Peso    : " << chocolates[1].peso << std::endl;
	std::cout << "Calorias: " << chocolates[1].calorias << std::endl;
	std::cout << "--------------------------" << std::endl;

	std::cout << "Chocolate #3" << std::endl;
	std::cout << "Marca   : " << chocolates[2].marca << std::endl;
	std::cout << "Peso    : " << chocolates[2].peso << std::endl;
	std::cout << "Calorias: " << chocolates[2].calorias << std::endl;
	std::cout << "--------------------------" << std::endl;

	return 0;
}