#include <iostream>

constexpr int tamanho = 100;

struct livro
{
	char titulo[tamanho];
	char autor[tamanho];
	unsigned short paginas;
	float preco;
};

struct jogo
{
	char titulo[tamanho];
	char criadora[tamanho];
	float preco;
	float nota;
};

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Você quer um jogo ou um livro emprestado?" << std::endl << std::endl;
	std::cout << "Se quiser um jogo digite 0" << std::endl;
	std::cout << "Se quiser um livro digite 1" << std::endl << std::endl;
	std::cout << "Escolha: ";
	bool escolha;
	std::cin >> escolha;
	std::cin.ignore();

	if (escolha)
	{
		std::cout << "Digite o título do livro: ";
		livro livrosEmprestados[10] = {};
		std::cin.getline(livrosEmprestados[0].titulo, tamanho);

		std::cout << "Digite o nome do autor de " << livrosEmprestados[0].titulo << ": ";
		std::cin.getline(livrosEmprestados[0].autor, tamanho);

		std::cout << "Quantas páginas tem o livro? ";
		std::cin >> livrosEmprestados[0].paginas;

		std::cout << "Quanto custa? R$";
		std::cin >> livrosEmprestados[0].preco;

		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Dados do livro:" << std::endl;
		std::cout << "Título  : " << livrosEmprestados[0].titulo << std::endl;
		std::cout << "Autor   : " << livrosEmprestados[0].autor << std::endl;
		std::cout << "Páginas : " << livrosEmprestados[0].paginas << std::endl;
		std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
		std::cout.precision(2);
		std::cout << "Preço   : R$" << livrosEmprestados[0].preco << std::endl;
	}
	else 
	{
		std::cout << "Digite o título do jogo: ";
		jogo jogosEmprestados[10] = {};
		std::cin.getline(jogosEmprestados[0].titulo, tamanho);

		std::cout << "Digite o nome da criadora de " << jogosEmprestados[0].titulo << ": ";
		std::cin.getline(jogosEmprestados[0].criadora, tamanho);

		std::cout << "Digite o preço do jogo: R$";
		std::cin >> jogosEmprestados[0].preco;

		std::cout << "Qual foi a nota dada a " << jogosEmprestados[0].titulo << "? ";
		std::cin >> jogosEmprestados[0].nota;

		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Dados do jogo:" << std::endl;
		std::cout << "Título   : " << jogosEmprestados[0].titulo << std::endl;
		std::cout << "Criadora : " << jogosEmprestados[0].criadora << std::endl;
		std::cout << "Nota     : " << jogosEmprestados[0].nota << std::endl;
		std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
		std::cout.precision(2);
		std::cout << "Preço    : R$" << jogosEmprestados[0].preco << std::endl;
	}

	return 0;
}