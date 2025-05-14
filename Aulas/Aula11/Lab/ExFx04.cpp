#include <iostream>
#include <cstring>

int main(void)
{
	char nome[] = "C++ Primer Plus";
	std::cout << "Valor do vetor nome:\t" << nome << std::endl;
	std::cout << "O vetor nome tem:\t" << strlen(nome) << " letras." << std::endl;
	std::cout << "O vetor nome tem:\t" << sizeof(nome) << " bytes." << std::endl;

	return 0;
}