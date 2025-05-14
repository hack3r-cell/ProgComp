#include <iostream>

char ultimaLetra(char []);

int main(void)
{
	system("chcp 1252 > nul");
	char vetor[] = "progcomp";
	std::cout << "Em " << vetor << " a última letra do vetor é " << ultimaLetra(vetor) << "." << std::endl;

	return 0;
}

char ultimaLetra(char vetor[])
{
	int i = 0;
	for (; vetor[i]; i++)
	{

	}
	return vetor[i - 1];
}