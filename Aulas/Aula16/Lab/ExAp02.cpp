#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite 4 palavras:" << std::endl;
	char palavra1[20], palavra2[20], palavra3[20], palavra4[20];
	std::cin >> palavra1 >> palavra2 >> palavra3 >> palavra4;

	int contador = 0;

	for (int i = 0; palavra1[i]; i++)
		contador++;

	for (int i = 0; palavra2[i]; i++)
		contador++;

	for (int i = 0; palavra3[i]; i++)
		contador++;

	for (int i = 0; palavra4[i]; i++)
		contador++;

	char * conjuntoPalavras = new char[contador + 4];

	strcpy(conjuntoPalavras, palavra1);
	strcat(conjuntoPalavras, " ");
	strcat(conjuntoPalavras, palavra2);
	strcat(conjuntoPalavras, " ");
	strcat(conjuntoPalavras, palavra3);
	strcat(conjuntoPalavras, " ");
	strcat(conjuntoPalavras, palavra4);

	std::cout << "Concatenando as palavras obtém-se:" << std::endl;
	std::cout << conjuntoPalavras << std::endl;
	
	delete [] conjuntoPalavras;

	return 0;
}