#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	int soma = 0;
	
	int i = 1;

	// Versão com o do while
	do
	{
		soma += i;
		i += 2;
	}
	while (i < 100);

	// Versão com o while
	//while (i < 100)
	//{
	//	soma += i;
	//	i += 2;
	//}

	// Versão com o for
	//for (int i = 1; i < 100; i += 2)
	//	soma += i;

	std::cout << "A soma de todos os números ímpares de 0 a 100 é: " << soma << std::endl;

	return 0;
}