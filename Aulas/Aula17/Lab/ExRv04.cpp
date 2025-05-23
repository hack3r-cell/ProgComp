#include <iostream>

int main(void)
{
	int x;
	std::cout << std::boolalpha;
	std::cout << (std::cin >> x, x > 0) << std::endl;
	return 0;
}