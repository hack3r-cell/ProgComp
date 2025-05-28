#include <iostream>
#include <cctype>

void menu();

int main(void)
{
	system("chcp 1252 > nul");

	menu();
	std::cout << "Escolha: ";
	char operacao;
	std::cin.get(operacao);
	std::cin.ignore();

	operacao = tolower(operacao);
	while (operacao != 's')
	{
		std::cout << "Digite o primeiro número: ";
		double numero1;
		std::cin >> numero1;

		std::cout << "Digite o segundo número.: ";
		double numero2;
		std::cin >> numero2;

		switch (operacao)
		{
			case '+':
				std::cout << "Resultado: " << numero1 + numero2 << std::endl;
				break;
			case '-':
				std::cout << "Resultado: " << numero1 - numero2 << std::endl;
				break;
			case '*':
				std::cout << "Resultado: " << numero1 * numero2 << std::endl;
				break;
			case '/':
				if (numero2 == 0)
				{
					std::cout << "Impossível dividir por zero!" << std::endl;
					break;
				}
				std::cout << "Resulatdo: " << numero1 / numero2 << std::endl;
				break;
			default:
				std::cout << "Operação Inválida!" << std::endl;
		}
		std::cout << std::endl;
		std::cout << "Escolha: ";
		std::cin.ignore();
		std::cin.get(operacao);
		std::cin.ignore();
		operacao = tolower(operacao);
	}

	std::cout << "Tchau!" << std::endl;

	return 0;
}

void menu()
{
	std::cout << "Minicalculadora" << std::endl;
	std::cout << std::endl;
	std::cout << "Digite um operador:" << std::endl;
	std::cout << "\t+ -> para somar" << std::endl;
	std::cout << "\t- -> para subtrair" << std::endl;
	std::cout << "\t* -> para multiplicar" << std::endl;
	std::cout << "\t/ -> para divir" << std::endl;
	std::cout << "\t[ s ] -> para sair" << std::endl;
	std::cout << std::endl;
	return;
}