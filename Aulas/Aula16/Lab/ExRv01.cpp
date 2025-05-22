#include <iostream>

int main(void)
{
	// O laço vai ficar pedindo um valor verdadeiro (isso é diferente de zero)
	// enquanto o usuário digitar esse valor o laço será executado
	int x;
	std::cout << "Digite um valor: ";
	for (std::cin >> x; x; std::cin >> x)
		std::cout << "Digite um valor: ";

	return 0;
}