#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite um texto (# para finalizar):" << std::endl;
	char ch;
	std::cin.get(ch);

	int substituicoes = 0;

	while (ch != '#')
	{
		if (ch == '!')
		{
			std::cout << ch;
			substituicoes++;
		}
		else if (ch == '.')
		{
			ch = '!';
			substituicoes++;
		}
		std::cout << ch;
		std::cin.get(ch);
	}

	std::cout << std::endl << "Substituições: " << substituicoes << std::endl;

	return 0;
}