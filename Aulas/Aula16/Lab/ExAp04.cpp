#include <iostream>

int main(void)
{
	int vetorB[10] = { 32, 16, 47, 10, 82, 29, 30, 28, 15, 64 };
	int primeiro = 0;
	int ultimo = 9;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "[" << vetorB[primeiro] << ", " << vetorB[ultimo] << "] ";
		primeiro++;
		ultimo--;
	}
	std::cout << std::endl;

	return 0;
}