#include <iostream>
#include <climits>

bool isShort(int);
bool isInt(long long);

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite um valor inteiro: ";
	long long numero;
	std::cin >> numero;

	if (isShort(numero))
	{
		std::cout << numero << " cabe em 16 bits" << std::endl;
	}
	else
	{
		std::cout << numero << " não cabe em 16 bits" << std::endl;
	}

	if (isInt(numero))
	{
		std::cout << numero << " cabe em 32 bits" << std::endl;
	}
	else
	{
		std::cout << numero << " não cabe em 32 bits" << std::endl;
	}

	return 0;
}

bool isShort(int numero)
{
	if (numero >= SHRT_MIN && numero <= SHRT_MAX)
	{
		return true;
	}
	return false;
}

bool isInt(long long numero)
{
	if (numero >= INT_MIN && numero <= INT_MAX)
	{
		return true;
	}
	return false;
}