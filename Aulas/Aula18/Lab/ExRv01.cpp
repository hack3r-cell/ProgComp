#include <iostream>

int main(void)
{
	// j = 6 8
	int j = 5;
	while (++j < 9)
		std::cout << j++ << std::endl;

	return 0;
}