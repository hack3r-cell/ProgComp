#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	char ch = 'A';
	char * ptr = &ch;
	*ptr = 'B';
	std::cout << "Conteúdo da variável           : " << ch << std::endl;
	std::cout << "Conteúdo apontado pelo ponteiro: " << * ptr << std::endl;

	return 0;
}