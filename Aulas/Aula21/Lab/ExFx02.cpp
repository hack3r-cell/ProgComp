#include <iostream>

constexpr float valor1 = 5'000.00f;
constexpr float valor2 = 15'000.00f;
constexpr float valor3 = 35'000.00f;

constexpr float taxa1 = 0.10f;
constexpr float taxa2 = 0.15f;
constexpr float taxa3 = 0.20f;

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite o seu salário: R$";
	float salario;
	std::cin >> salario;

	float imposto = 0.0f;
	while (salario > 0)
	{
		if (salario <= valor1)
			imposto = 0.00f;
		else if (salario <= valor2)
			imposto = (salario - valor1) * taxa1;
		else if (salario <= valor3)
			imposto = (valor2 - valor1) * taxa1 + (salario - valor2) * taxa2;
		else 
			imposto = (valor2 - valor1) * taxa1 + (valor3 - valor2) * taxa2 + (salario - valor3) * taxa3;

		std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
		std::cout.precision(2);
		std::cout << "Imposto a pagar: R$" << imposto << std::endl;
		std::cout << "Digite o seu salário: R$";
		std::cin >> salario;
	}

	return 0;
}