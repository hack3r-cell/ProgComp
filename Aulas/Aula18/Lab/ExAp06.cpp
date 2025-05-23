#include <iostream>
#include <cstring>

struct Pessoa
{
	char nome[20];
	unsigned idade;
	char sexo;
};

std::istream& operator>>(std::istream&, Pessoa&);
std::ostream& operator<<(std::ostream&, Pessoa&);

int main(void)
{
	system("chcp 1252 > nul");
	int quantidade = 0;
	float mediaIdade = 0.0f;
	
	Pessoa pessoa;
	std::cout << "Digite o nome, idade e sexo da pessoa: ";
	std::cin >> pessoa;

	while (strcmp(pessoa.nome, "fim") != 0)
	{
		quantidade++;
		mediaIdade += pessoa.idade;
		std::cout << "Digite o nome (fim para), idade e sexo da pessoa: ";
		std::cin >> pessoa;
	}

	mediaIdade /= quantidade;
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(1);
	std::cout << "A média de idade do grupo é " << mediaIdade << " anos de idade." << std::endl;

	return 0;
}

std::istream& operator>>(std::istream &is, Pessoa &p)
{
	is >> p.nome;
	is >> p.idade;
	is >> p.sexo;
	return is;
}

std::ostream& operator<<(std::ostream& os, Pessoa& p)
{
	os << p.nome;
	os << " ";
	os << p.idade;
	os << " ";
	os << p.sexo;
	return os;
}