#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite a distância da viagem em km: ";
	int distancia;
	std::cin >> distancia;

	float preco = 0.0f;
	if (distancia <= 200)
		preco = distancia * 0.5f;
	else if (distancia <= 400)
		preco = distancia * 0.4f;
	else
		preco = distancia * 0.3f;

	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << "Total a pagar: R$ " << preco << std::endl;

	return 0;
}