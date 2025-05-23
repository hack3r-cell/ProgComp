#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite as idades do grupo:" << std::endl;
	int idade;
	std::cin >> idade;

	int maiorIdade = 0;
	int soma = 0;
	int maisVelho = idade;
	int maisNovo = idade;

	if (idade > 17)
		maiorIdade++;
	soma += idade;

	while (idade != 0)
	{
		std::cin >> idade;
		if (idade > 17)
			maiorIdade++;
		if (idade > maisVelho)
			maisVelho = idade;
		if (idade < maisNovo && idade != 0)
			maisNovo = idade;
		soma += idade;
	}

	std::cout << "Nesse grupo " << maiorIdade << " pessoas são maior de idade." << std::endl;
	std::cout << "O mais novo tem " << maisNovo << " anos de idade." << std::endl;
	std::cout << "O mais velho tem " << maisVelho << " anos de idade." << std::endl;

	return 0;
}