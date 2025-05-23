#include <iostream>

int main(void)
{
	int j;
	for (j = 0; j < 11; j += 3)
		std::cout << j << " ";
	std::cout << j << std::endl;

	return 0;
}