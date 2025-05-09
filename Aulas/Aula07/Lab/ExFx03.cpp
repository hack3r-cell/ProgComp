#include <iostream>

char charada(char, int);

int main(void)
{
	std::cout << charada('<', 20);
	std::cout << charada('\a', 90);
	std::cout << charada('(', 72);
	std::cout << charada('5', 48);
	std::cout << charada(1, 107);
	std::cout << std::endl;

	return 0;
}

char charada(char ch, int x)
{
	ch = ch + x;
	return ch;
}