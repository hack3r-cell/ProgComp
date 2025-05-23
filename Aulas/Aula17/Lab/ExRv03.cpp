#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	char string[30] = "C++ é muito legal!";

	for (int i = 0; string[i] != '\0'; i++)
		std::cout << string[i];
	std::cout << std::endl;

	for (int i = 0; string[i]; i++)
		std::cout << string[i];
	std::cout << std::endl;

	return 0;
}