#include <iostream>

constexpr int tamanho = 4;

enum { nome, cargo, apelido };

struct bop
{
	char nome[50];
	char cargo[50];
	char apelido[50];
	int pref;
};

void menu();
std::ostream& operator<<(std::ostream&, bop&);

int main(void)
{
	system("chcp 1252 > nul");

	menu();
	char escolha;
	std::cin.get(escolha);
	std::cin.ignore();

	bop * funcionarios = new bop[tamanho]{
		{ "José", "Garçon", "Paquito", apelido },
		{ "Marcos", "Porteiro", "Soneca", cargo },
		{ "João", "Segurança", "Coxinha", cargo },
		{ "Carlos", "Faxineiro", "Tuta", nome }
	};

	while (escolha != 'e')
	{
		switch (escolha)
		{
			case 'a':
			case 'A':
				for (int i = 0; i < tamanho; i++)
					std::cout << funcionarios[i].nome << std::endl;
				std::cout << std::endl;
				break;
			case 'b':
			case 'B':
				for (int i = 0; i < tamanho; i++)
					std::cout << funcionarios[i].cargo << std::endl;
				std::cout << std::endl;
				break;
			case 'c':
			case 'C':
				for (int i = 0; i < tamanho; i++)
					std::cout << funcionarios[i].apelido << std::endl;
				std::cout << std::endl;
				break;
			case 'd':
			case 'D':
				for (int i = 0; i < tamanho; i++)
					std::cout << funcionarios[i] << std::endl;
				std::cout << std::endl;
				break;
			default:
				std::cout << "Opção Inválida!" << std::endl;
				std::cout << std::endl;
		}
		menu();
		std::cin.get(escolha);
		std::cin.ignore();
	}

	std::cout << "Tchau!" << std::endl;
	
	delete [] funcionarios;

	return 0;
}

void menu()
{
	std::cout << "Listagem de Funcioários" << std::endl;
	std::cout << std::endl;
	std::cout << "\ta. Mostrar por nome" << std::endl;
	std::cout << "\tb. Mostrar por cargo" << std::endl;
	std::cout << "\tc. Mostrar por apelido" << std::endl;
	std::cout << "\td. Mostrar por preferência" << std::endl;
	std::cout << "\te. Sair" << std::endl;
	std::cout << std::endl;
	std::cout << "Digite sua opção: ";

	return;
}

std::ostream& operator<<(std::ostream &os, bop &b)
{
	switch (b.pref)
	{
		case nome:
			os << b.nome;
			break;
		case cargo:
			os << b.cargo;
			break;
		case apelido:
			os << b.apelido;
			break;
	}
	return os;
}
