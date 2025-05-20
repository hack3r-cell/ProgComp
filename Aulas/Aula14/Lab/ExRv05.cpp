#include <iostream>

/*
 * Ao tentar acessar um determinado endereço não escolhido pelo sistema operacional
 * O programa não consegue acessar e termina sendo encerrado pelo sistema operacional
 */

int main(void)
{
	int * ptr = (int *) 0x01;
	std::cout << *ptr << std::endl;

	return 0;
}