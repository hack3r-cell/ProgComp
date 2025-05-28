#include <iostream>
#include <cstring>
#include <cctype>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite palavras (s para sair):" << std::endl;
	char palavra[20];
	std::cin >> palavra;

	unsigned vogais = 0;
	unsigned consoantes = 0;
	unsigned outras = 0;
	while (strcmp(palavra, "s"))
	{
		if (isalpha(palavra[0]))
		{
			switch (palavra[0])
			{
				case 'a':
				case 'A':
				case 'e':
				case 'E':
				case 'i':
				case 'I':
				case 'o':
				case 'O':
				case 'u':
				case 'U':
					vogais++;
					break;
				default:
					consoantes++;
			}
		}
		else
			outras++;
		std::cin >> palavra;
	}

	std::cout << vogais << " palavras começam por vogais" << std::endl;
	std::cout << consoantes << " palavras começam por consoantes" << std::endl;
	std::cout << outras << " outras palavras" << std::endl;

	return 0;
}