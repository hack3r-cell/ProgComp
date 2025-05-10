#include <iostream>

int main(void)
{
	std::cout << "Digite sua idade em ano: ";
	unsigned short idade;
	std::cin >> idade;

	float segundosAno = 3.156E7;  // 31560000
	float total = idade * segundosAno;

	std::cout << idade << " anos correspondem a ";
	std::cout << std::fixed;
	std::cout.precision(1);
	std::cout << total << " segundos.";
	std::cout << std::endl;

	return 0;
}