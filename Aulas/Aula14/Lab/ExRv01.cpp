#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	double litros;
	double * ptr = &litros;

	*ptr = 3.4;
	std::cout << "O valor de litros é " << *ptr << std::endl;

	return 0;
}