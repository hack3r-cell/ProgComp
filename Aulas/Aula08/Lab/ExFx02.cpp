#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite um ponto flutuante: ";
	double numero;
	std::cin >> numero;

	//std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);

	std::cout << "Notação padrão: " << numero << std::endl;
	std::cout.precision(6);
	std::cout << std::scientific;
	std::cout << "Notação científica: " << numero << std::endl;
	std::cout << std::fixed;
	std::cout << "Notação decimal: " << numero << std::endl;

	return 0;
}