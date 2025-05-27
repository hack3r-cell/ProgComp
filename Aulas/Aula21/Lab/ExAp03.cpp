#include <iostream>

int main(void)
{
	int soma = 0;

	for (int i = 3; i < 1000; i++)
		if (i % 3 == 0 || i % 5 == 0)
			soma += i;

	std::cout << "Resultado: " << soma << std::endl;

	return 0;
}