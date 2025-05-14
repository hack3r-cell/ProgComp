#include <iostream>

/*
 * A posição em que o programa fecha não é a mesma.
 * O sistema operacional sempre vai intervir fechando o programa não deixando terminar o loop.
 * E o mais imprecionante é que não dá nenhum erro na compilação do programa.
 * Fazendo com que o programador tome mais cuidado na hora de trabalhar com vetores.
*/

int main(void)
{
	system("chcp 1252 > nul");
	int vetor[5] = { 0 };

	for (int i = 0; i < 5001; i++)
	{
		vetor[i] = 60;
		std::cout << i << "° posição valor = " << vetor[i] << std::endl;
	}

	return 0;
}