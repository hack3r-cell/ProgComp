#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

bool eNatal( char [], char []);

int main(void)
{
	system("chcp 1252 > nul");

	constexpr int tamanho = 20;

	std::cout << "Quais suas datas comemorativas preferidas?" << std::endl;
	char data1[tamanho];
	char data2[tamanho];
	char data3[tamanho];
	std::cin.getline(data1, tamanho);
	std::cin.getline(data2, tamanho);
	std::cin.getline(data3, tamanho);

	char frase[tamanho * 4];
	strcpy(frase, data1);
	strcat(frase, ", ");
	strcat(frase, data2);
	strcat(frase, " e ");
	strcat(frase, data3);
	strcat(frase, " são belas festas.");
	
	std::cout << std::endl << frase << std::endl;

	char natal[] = "Natal";
	if (eNatal(data1, natal) || eNatal(data2, natal) || eNatal(data3, natal))
	{
		std::cout << "O " << natal << " também é uma das minhas datas preferidas!" << std::endl;
	}

	return 0;
}

bool eNatal(char vetor1[], char vetor2[])
{
	for (int i = 0; vetor1[i]; i++)
	{
		if (vetor1[i] != vetor2[i]) 
		{
			return 0;
		}
	}
	return 1;
}