#include <iostream>

struct balao
{
	float diametro;
	char marca[20];
	int modelo;
};

int main(void)
{
	system("chcp 1252 > nul");

	balao * pb = new balao;
	std::cout << "Digite o diâmetro do balão: ";
	std::cin >> pb->diametro;

	std::cout << "Digite a marca do balão: ";
	std::cin >> pb->marca;

	std::cout << "Digite o modelo do balão: ";
	std::cin >> pb->modelo;

	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << "Dados do balão" << std::endl;
	std::cout << "Diâmetro: " << pb->diametro << std::endl;
	std::cout << "Marca   : " << pb->marca << std::endl;
	std::cout << "Modelo  : " << pb->modelo << std::endl;

	delete pb;

	return 0;
}