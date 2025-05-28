#include <iostream>
#include <cctype>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite um frase (@ para finalizar):" << std::endl;
	char ch;
	std::cin.get(ch);

	unsigned letraA = 0, letraE = 0, letraI = 0, letraO = 0, letraU = 0;
	while (ch != '@')
	{
		if (isalpha(ch))
		{
			switch (ch)
			{
				case 'a':
				case 'A':
					letraA++;
					break;
				case 'e':
				case 'E':
					letraE++;
					break;
				case 'i':
				case 'I':
					letraI++;
					break;
				case 'o':
				case 'O':
					letraO++;
					break;
				case 'u':
				case 'U':
					letraU++;
					break;
			}
		}
		std::cin.get(ch);
	}

	std::cout << "a: " << letraA << std::endl;
	std::cout << "e: " << letraE << std::endl;
	std::cout << "i: " << letraI << std::endl;
	std::cout << "o: " << letraO << std::endl;
	std::cout << "u: " << letraU << std::endl;

	return 0;
}