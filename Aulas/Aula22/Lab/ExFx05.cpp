#include <iostream>

void menu();

int main(void)
{
	system("chcp 1252 > nul");

	menu();
	std::cout << std::endl;
	std::cout << "Escolha: ";
	char ch;
	std::cin.get(ch);
	std::cin.ignore();

	while (ch != 'd')
	{
		switch (ch)
		{
		case 'a':
			std::cout << "Inserindo elementos..." << std::endl;
			break;
		case 'b':
			std::cout << "Removendo elementos..." << std::endl;
			break;
		case 'c':
			std::cout << "Buscando elementos..." << std::endl;
			break;
		default:
			std::cout << "Opção Inválida!" << std::endl;
		}
		std::cout << std::endl;
		std::cout << "Escolha: ";
		std::cin.get(ch);
		std::cin.ignore();
	}

	std::cout << "Tchau!" << std::endl;

	return 0;
}

void menu()
{
	std::cout << "Menu do Sistema" << std::endl;
	std::cout << std::endl;
	std::cout << "a) Inserir" << std::endl;
	std::cout << "b) Remover" << std::endl;
	std::cout << "c) Buscar" << std::endl;
	std::cout << "d) Sair" << std::endl;
	return;
}