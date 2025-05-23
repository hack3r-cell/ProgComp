#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	float daiane = 110;
	float celia = 105;
	int anos = 1;

	while (celia < daiane)
	{
		daiane += 10;
		celia *= 1.05f;
		anos++;
	}

	std::cout << "Se passaram " << anos << " anos para os saldos atingirem os valores" << std::endl;
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << "Daiane: " << daiane << std::endl;
	std::cout << "Célia : " << celia << std::endl;

	return 0;
}