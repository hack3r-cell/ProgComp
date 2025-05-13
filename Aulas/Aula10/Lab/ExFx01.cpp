#include <iostream>

int main(void)
{
	constexpr int max = 3; // Tamanho do vetor

	float precos[max];

	precos[0] = 1.50f;  // Preço da unidade da alface
	precos[1] = 2.00f;  // Preço da unidade da beterraba
	precos[2] = 1.00f;  // Preço da unidade da cenoura
	
	float quantidades[max];

	std::cout << "Prezado Cliente," << std::endl;
	std::cout << "Digite a quantidade de quilos desejados:" << std::endl;

	std::cout << "Alface: ";
	std::cin >> quantidades[0];

	std::cout << "Beterraba: ";
	std::cin >> quantidades[1];

	std::cout << "Cenoura: ";
	std::cin >> quantidades[2];

	std::cout << std::endl << "Resumo da Compra" << std::endl;
	std::cout << "----------------------" << std::endl;

	// Configurando o cout
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);

	std::cout << "Alface    = R$" << quantidades[0] * precos[0] << std::endl;
	std::cout << "Beterraba = R$" << quantidades[1] * precos[1] << std::endl;
	std::cout << "Cenoura   = R$" << quantidades[2] * precos[2] << std::endl;
	std::cout << "----------------------" << std::endl;
	std::cout << "Total     = R$" << quantidades[0] * precos[0] + quantidades[1] * precos[1] + quantidades[2] * precos[2];
	std::cout << std::endl;

	return 0;
}