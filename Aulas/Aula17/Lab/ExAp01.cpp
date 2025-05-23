#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite 10 valores: ";
	int vetorA[5] = {};
	for (int i = 0; i < 5; i++)
		std::cin >> vetorA[i];

	int vetorB[5] = {};
	for (int i = 0; i < 5; i++)
		std::cin >> vetorB[i];

	int vetorS[5] = {};
	for (int i = 0; i < 5; i++)
		vetorS[i] = vetorA[i] + vetorB[i];

	std::cout << "Vetor A: ";
	for (int i = 0; i < 5; i++)
		std::cout << vetorA[i] << " ";
	std::cout << std::endl;

	std::cout << "Vetor B: ";
	for (int i = 0; i < 5; i++)
		std::cout << vetorB[i] << " ";
	std::cout << std::endl;

	std::cout << "Vetor S: ";
	for (int i = 0; i < 5; i++)
		std::cout << vetorS[i] << " ";
	std::cout << std::endl;
		
	return 0;
}