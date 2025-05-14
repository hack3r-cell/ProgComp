#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");
	float pesos[3] = { 2.00f, 3.00f, 4.00f };

	std::cout << "Digite as suas notas: ";
	float notas[3] = { 0.00f };
	std::cin >> notas[0] >> notas[1] >> notas[2];

	float media = (notas[0] * pesos[0] + notas[1] * pesos[1] + notas[2] * pesos[2]) / 9.00f;
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << "Sua média foi: " << media << std::endl;

	return 0;
}
