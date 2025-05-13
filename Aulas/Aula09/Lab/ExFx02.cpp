#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite um ponto-flutuante: ";
	float numero;
	std::cin >> numero;

	std::cout << "Notação padrão: " << numero << std::endl;
	
	std::cout.setf(std::ios_base::scientific, std::ios_base::floatfield);
	std::cout << "Notação científica: " << numero << std::endl;
	
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << "Notação decimal: " << numero << std::endl;

	return 0;
}
