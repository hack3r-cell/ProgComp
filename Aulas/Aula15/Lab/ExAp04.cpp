#include <iostream>
#include <iomanip>

struct Local
{
	char nome[20];
	char pais[20];
	char continente[20];
};

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Quantos locais você quer visitar nas próximas férias? ";
	int quantidade;
	std::cin >> quantidade;
	std::cin.ignore();

	std::cout << "------------------------------------------------------------" << std::endl;

	Local * locais = new Local[quantidade];

	for (int i = 0; i < quantidade; i++)
	{
		std::cout << "Nome do #" << std::setw(2) << std::setfill('0') << (i + 1) << " local     : ";
		std::cin.getline(locais[i].nome, 20);
		std::cout << "Nome do #" << std::setw(2) << std::setfill('0') << (i + 1) << " país      : ";
		std::cin.getline(locais[i].pais, 20);
		std::cout << "Nome do #" << std::setw(2) << std::setfill('0') << (i + 1) << " continente: ";
		std::cin.getline(locais[i].continente, 20);
	}

	std::cout << "------------------------------------------------------------" << std::endl;
	std::cout << "Locais escolhidos para as próximas férias:" << std::endl;

	for (int i = 0; i < quantidade; i++)
	{
		std::cout << "Nome do #" << std::setw(2) << std::setfill('0') << (i + 1) << " local     : " << locais[i].nome << std::endl;
		std::cout << "Nome do #" << std::setw(2) << std::setfill('0') << (i + 1) << " país      : " << locais[i].pais << std::endl;
		std::cout << "Nome do #" << std::setw(2) << std::setfill('0') << (i + 1) << " continente: " << locais[i].continente << std::endl;
	}

	delete [] locais;

	return 0;
}