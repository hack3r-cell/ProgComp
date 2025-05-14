#include <iostream>

int main(void)
{
	char gato[5] = { 'm', 'i', 'a', 'r', '\0' };
	char cachorro[5] = { 'l', 'a', 't', 'i', 'r' };

	std::cout << gato << std::endl;
	std::cout << cachorro << std::endl;

	return 0;
}