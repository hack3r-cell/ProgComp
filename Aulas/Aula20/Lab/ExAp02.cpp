#include <iostream>

constexpr int limite = 80;

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "As últimas 10 velocidades registradas:" << std::endl;
	int velocidades[10] = {};
	int velocidade = 0;

	for (int i = 0; i < 10; i++)
	{
		std::cin >> velocidade;
		velocidades[i] = velocidade;
	}

	int multa = 0;
	int carros = 0;
	int total = 0;

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		if (velocidades[i] > limite)
		{
			multa = (velocidades[i] - limite) * 8;
			carros++;
			total += multa;
			std::cout << velocidades[i] << " Km/h excede o limite = multa de R$ " << multa;
			std::cout << std::endl;
		}
	}

	std::cout << std::endl << carros << " carros foram multados em um valor total de R$ " << total << ".";
	std::cout << std::endl;

	return 0;
}