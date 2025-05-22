#include <iostream>

int main(void)
{
	int vetorA[10] = {46, 78, 40, 96, 74, 58, 32, 56, 91, 6};
	int * p1 = &vetorA[0];
	int * p2 = &vetorA[1];

	std::cout << "[" << * p1 << ", " << * p2 << "] ";

	for (int i = 0; i < 4; i++)
	{
		p1 = p1 + 2;
		p2 = p2 + 2;
		std::cout << "[" << * p1 << ", " << * p2 << "] ";
	}

	std::cout << std::endl;

	return 0;
}