#include <iostream>

struct carro
{
	char modelo[20];
	int anoFabricacao;
	float preco;
};

void exibirTotal(carro[]);

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Entre com os dados de 2 carros:" << std::endl;
	carro * carros = new carro[2];
	
	std::cin >> carros[0].modelo >> carros[0].anoFabricacao >> carros[0].preco;
	std::cin >> carros[1].modelo >> carros[1].anoFabricacao >> carros[1].preco;
	
	exibirTotal(carros);

	delete [] carros;

	return 0;
}

void exibirTotal(carro vet[])
{
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << "O valor total é R$" << vet[0].preco + vet[1].preco << std::endl;
	return;
}