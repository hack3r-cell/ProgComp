#include <iostream>

long long calculo(long long, long long);

int main(void)
{
	system("chcp 1252 > nul");

	long long resultado = 200530LL * 420800;
	std::cout << "Direto: " << resultado << std::endl;
	std::cout << "Função: " << calculo(200530, 420800) << std::endl;

	return 0;
}

long long calculo(long long a, long long b)
{
	return a * b;
}