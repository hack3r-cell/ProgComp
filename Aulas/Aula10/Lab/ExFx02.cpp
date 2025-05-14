#include <iostream>

int main(void)
{
	constexpr int tamanho = 5;

	int vetorA[tamanho] = { 10, 20, 30, 40, 50 };
	int vetorB[tamanho] = { 10, 20 };
	int vetorC[tamanho] = { 0, 0, 30 };
	
	std::cout << "Vetor A: ";
	std::cout << vetorA[0] << " " << vetorA[1] << " " << vetorA[2] << " " << vetorA[3] << " " << vetorA[4] << std::endl;
	std::cout << "Vetor B: ";
	std::cout << vetorB[0] << " " << vetorB[1] << " " << vetorB[2] << " " << vetorB[3] << " " << vetorB[4] << std::endl;
	std::cout << "Vetor C: ";
	std::cout << vetorC[0] << " " << vetorC[1] << " " << vetorC[2] << " " << vetorC[3] << " " << vetorC[4] << std::endl;

	return 0;
}