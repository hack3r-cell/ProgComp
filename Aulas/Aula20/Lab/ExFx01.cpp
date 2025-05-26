#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
	system("chcp 1252 > nul");

	// Para atualizar a cada segundo
	srand(time(NULL));

	std::cout << "Tente advinhar o meu número (entre 0 até 10): ";
	int numero;
	int aleatorio = rand() % 11;
	for (std::cin >> numero; numero != aleatorio; std::cin >> numero)
	{
		if (numero > aleatorio)
			std::cout << "Muito alto" << std::endl;
		else
			std::cout << "Muito baixo" << std::endl;
		std::cout << "Digite novamente o número: ";
	}

	std::cout << "Parabéns o meu número era: " << aleatorio << std::endl;

	return 0;
}