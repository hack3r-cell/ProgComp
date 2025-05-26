#include <iostream>

int main(void)
{
	int dolares = 1;
	int espacos = 4;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < espacos; j++)
			std::cout << " ";
		for (int j = 0; j < dolares; j++)
			std::cout << "$";
		for (int j = 0; j < espacos; j++)
			std::cout << " ";
		std::cout << std::endl;
		dolares += 2;
		espacos--;
	}

	return 0;
}