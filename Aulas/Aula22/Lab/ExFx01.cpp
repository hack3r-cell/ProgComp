#include <iostream>
#include <cctype>

int main(void)
{
	int letras = 0;
	
	char ch;
	std::cin >> ch;

	while (ch != '!' && ch != '?')
	{
		if (!(isalpha(ch)))
		{
			std::cin >> ch;
		}
		else 
		{
			letras++;
			std::cin >> ch;
		}
	}

	return 0;
}