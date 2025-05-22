#include <iostream>

struct carro
{
	char fabricante[20];
	int anoConstrucao;
};

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Quantos carros para catalogar? ";
	int quantidade;
	std::cin >> quantidade;
	std::cin.ignore();

	carro * carros = new carro[quantidade];
	for (int i = 0; i < quantidade; i++)
	{
		std::cout << "Carro #" << i + 1 << std::endl;
		std::cout << "Marca: ";
		std::cin.getline(carros[i].fabricante, 20);
		std::cout << "Ano: ";
		std::cin >> carros[i].anoConstrucao;
		std::cin.ignore();
	}

	std::cout << std::endl << "Aqui está a sua coleção:" << std::endl;
	for (int i = 0; i < quantidade; i++)
		std::cout << carros[i].anoConstrucao << " " << carros[i].fabricante << std::endl;

	delete [] carros;

	return 0;
}