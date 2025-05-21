#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	int * pi = new int{ 100 };
	std::cout << "Conteúdo armazenado: " << * pi << std::endl;
	std::cout << "Digite novo valor para esse bloco de memória: ";
	std::cin >> *pi;
	std::cout << "Novo valor: " << *pi << std::endl;
	delete pi;

	return 0;
}