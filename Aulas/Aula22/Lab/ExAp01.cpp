#include <iostream>
#include <cctype>

constexpr int tamanho = 20;

struct conta
{
	float desconto;
	float entrega;
	float pesagem;
	float preco;
	float total;
};

struct pedido
{
	float quilos;
	float precoTemp;
	float precoFinal;
	int vezes;
};

struct vegetal
{
	char nome[tamanho];
	float precoKg;
};

void menu(vegetal *, int);
void listaDeCompras(vegetal *, pedido *, int);
void totalAPagar(conta *);

int main(void)
{
	system("chcp 1252 > nul");

	const int tam = 3;

	vegetal * vegetais = new vegetal[tam]
	{
		{ "Alface", 1.25f },
		{ "Beterraba", 0.65f },
		{ "Cenoura", 0.90f }
	};

	pedido * pedidos = new pedido[tam]{};

	menu(vegetais, tam);
	char escolha;
	std::cin.get(escolha);
	std::cin.ignore();
	escolha = tolower(escolha);

	while (escolha != 's')
	{
		switch (escolha)
		{
			case 'a':
				pedidos[0].vezes++;
				if (pedidos[0].vezes == 2)
				{
					pedidos[0].precoFinal -= pedidos[0].precoTemp;
					pedidos[0].vezes = 1;
				}
				std::cout << "Entre com os quilos da " << vegetais[0].nome << ":     Kg\b\b\b\b\b\b";
				std::cin >> pedidos[0].quilos;
				std::cin.ignore();
				pedidos[0].precoTemp = pedidos[0].quilos * vegetais[0].precoKg;
				pedidos[0].precoFinal += pedidos[0].precoTemp;
				break;
			case 'b':
				pedidos[1].vezes++;
				if (pedidos[1].vezes == 2)
				{
					pedidos[1].precoFinal -= pedidos[1].precoTemp;
					pedidos[1].vezes = 1;
				}
				std::cout << "Entre com os quilos da " << vegetais[1].nome << ":      Kg\b\b\b\b\b\b";
				std::cin >> pedidos[1].quilos;
				std::cin.ignore();
				pedidos[1].precoTemp = pedidos[1].quilos * vegetais[1].precoKg;
				pedidos[1].precoFinal += pedidos[1].precoTemp;
				break;
			case 'c':
				pedidos[2].vezes++;
				if (pedidos[2].vezes == 2)
				{
					pedidos[2].precoFinal -= pedidos[2].precoTemp;
					pedidos[2].vezes = 1;
				}
				std::cout << "Entre com os quilos da " << vegetais[2].nome << ":      Kg\b\b\b\b\b\b";
				std::cin >> pedidos[2].quilos;
				std::cin.ignore();
				pedidos[2].precoTemp = pedidos[2].quilos * vegetais[2].precoKg;
				pedidos[2].precoFinal += pedidos[2].precoTemp;
				break;
			default:
				std::cout << "Opção Inválida!" << std::endl;
		}
		std::cout << "Faça seu pedido usando as letras (a, b, c) e (s) para encerrar: ";
		std::cin.get(escolha);
		std::cin.ignore();
		escolha = tolower(escolha);
	}

	conta * continha = new conta{};

	// Listar pedido
	listaDeCompras(vegetais, pedidos, tam);

	// Cálculo da conta
	continha->preco = pedidos[0].precoFinal + pedidos[1].precoFinal + pedidos[2].precoFinal;
	continha->pesagem = pedidos[0].quilos + pedidos[1].quilos + pedidos[2].quilos;

	// Desconto se o pedido passar dos R$100,00
	if (continha->preco > 100.00f)
		continha->desconto = continha->preco * 5 / 100;

	// Custo da entrega
	if (continha->pesagem < 5.00f)
		continha->entrega = 3.50;
	else if ((continha->pesagem >= 5.00f) && (continha->pesagem <= 20.00f))
		continha->entrega = 10.00f;
	else
		continha->entrega = 8.00f + ((continha->pesagem - 20.00f) * 0.10f);

	continha->total = continha->preco + continha->entrega - continha->desconto;

	totalAPagar(continha);

	delete [] vegetais;
	delete [] pedidos;
	delete continha;

	return 0;
}

void menu(vegetal * veg, int quantidade)
{
	std::cout << "Supermercado ABC" << std::endl;
	std::cout << "----------------" << std::endl;
	char letra = 'a';
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	for (int i = 0; i < quantidade; i++)
	{
		std::cout << letra++ << ") ";
		std::cout.width(10);
		std::cout << std::left;
		std::cout << veg[i].nome;
		std::cout << "\t\tR$ ";
		std::cout << veg[i].precoKg;
		std::cout << "/Kg" << std::endl;
	}
	std::cout << "Faça seu pedido usando as letras (a, b, c) e (s) para encerrar: ";
	return;
}

void listaDeCompras(vegetal * veg, pedido * ped, int quantidade)
{
	std::cout << "------------------------------------------------------------------------------" << std::endl;
	std::cout << "Produto      Preço/Kg    Pedido (Kg)  Total Parcial" << std::endl;
	std::cout << "----------   ---------   -----------  ---------------" << std::endl;
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	for (int i = 0; i < quantidade; i++)
	{
		std::cout.width(13);
		std::cout << std::left << veg[i].nome;
		std::cout << "R$ " << veg[i].precoKg << "/Kg\t ";
		std::cout.width(3);
		std::cout << std::left << ped[i].quilos << "Kg";
		std::cout.width(3);
		std::cout << "\tR$" << std::left << ped[i].precoFinal;
		std::cout << std::endl;
	}
	std::cout << "------------------------------------------------------------------------------" << std::endl;
	return;
}

void totalAPagar(conta * cont)
{
	std::cout << "Total do pedido.:              R$ " << cont->preco << std::endl;
	std::cout << "Descontos.......:              R$ " << cont->desconto << std::endl;
	std::cout << "Custo de entrega:              R$ " << cont->entrega << std::endl;
	std::cout << "------------------------------------------------------------------------------" << std::endl;
	std::cout << "Total a pagar...:              R$ " << cont->total << std::endl;
	return;
}