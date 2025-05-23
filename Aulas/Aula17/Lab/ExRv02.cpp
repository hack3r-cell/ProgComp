#include <iostream>

int main(void)
{
	for (int i = 1; i < 65; i = i * 2)
		std::cout << i << " ";
	std::cout << std::endl;

	return 0;
}