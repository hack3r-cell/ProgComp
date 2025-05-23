#include <iostream>

int main(void)
{
	int i = 0;
	while (++i < 4)
		std::cout << "Oi! ";
	do
		std::cout << "Tchau! ";
	while (i++ <= 8);

	return 0;
}