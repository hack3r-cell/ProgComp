#include <iostream>

int main(void)
{
	char string[] = "Pratique muito";

	for (int i = 0; string[i]; i++)
		std::cout << string[i];
	std::cout << std::endl;

	return 0;
}