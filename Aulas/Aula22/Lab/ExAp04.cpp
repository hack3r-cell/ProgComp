#include <iostream>

struct produto
{
	float preco;
	unsigned codigo;
};

int main(void)
{
	system("chcp 1252 > nul");

	produto * mercadoria = new produto;
	
	std::cout << "Digite o preço do produto R$";
	std::cin >> mercadoria->preco;

	std::cout << "Digite o códgio de origem: ";
	std::cin >> mercadoria->codigo;

	if (mercadoria->codigo >= 1 && mercadoria->codigo <= 9)
	{
		std::cout << "Procedência: ";
		switch (mercadoria->codigo)
		{
			case 1:
			case 2: std::cout << "Sul"; break;
			case 3: std::cout << "Norte"; break;
			case 4: std::cout << "Centro-oeste"; break;
			case 5:
			case 6: std::cout << "Nordeste"; break;
			case 7:
			case 8:
			case 9: std::cout << "Sudeste"; break;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "Código Inválido!" << std::endl;

	delete mercadoria;

	return 0;
}