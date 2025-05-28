#include <iostream>
#include <cctype>

int main(void)
{
	std::cout << "Digite seu texto (@ para sair):" << std::endl;

	char ch;
	std::cin.get(ch);

	while (ch != '@')
	{
		if (islower(ch))
			ch = toupper(ch);
		else if (isupper(ch))
			ch = tolower(ch);
		std::cout << ch;
		std::cin.get(ch);
	}

	std::cout << std::endl;

	return 0;
}