#include <iostream>

int main(void)
{
	int matriz[2][3] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 }
	};

	std::cout << matriz[0][0] << std::endl;
	std::cout << matriz[0] << std::endl;
	std::cout << &matriz[0][0] << std::endl;

	return 0;
}