#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Caixa Eletrônico" << std::endl;
	std::cout << "----------------" << std::endl;
	
	std::cout << "Saque: ";
	int saque;
	std::cin >> saque;

	// cédulas
	int cinquenta = 0;
	int vinte = 0;
	int dez = 0;
	int cinco = 0;

	if (saque % 5 != 0)
	{
		std::cout << "Não é possível sacar esse valor!" << std::endl;
	}
	else
	{
		while (saque > 0)
		{
			if (saque >= 50)
			{
				cinquenta = saque / 50;
				saque %= 50;
			}
			if (saque >= 20)
			{
				vinte = saque / 20;
				saque %= 20;
			}
			if (saque >= 10)
			{
				dez = saque / 10;
				saque %= 10;
			}
			if (saque >= 5)
			{
				cinco = saque / 5;
				saque %= 5;
			}
		}
		std::cout << "Entregando:" << std::endl;
		std::cout << cinquenta << " cédulas de R$ 50" << std::endl;
		std::cout << vinte << " cédulas de R$ 20" << std::endl;
		std::cout << dez << " cédulas de R$ 10" << std::endl;
		std::cout << cinco << " cédulas de R$ 5" << std::endl;
	}

	return 0;
}