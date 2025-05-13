#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Entre com a distância em metros: ";
	int distancia;
	std::cin >> distancia;

	int quilometros = distancia / 1000;
	int metros = distancia % 1000;
	std::cout << distancia << " metros equivalem a " << quilometros << " quilômetros e ";
	std::cout << metros << " metros." << std::endl;

	return 0;
}