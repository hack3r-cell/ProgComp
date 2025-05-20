#include <iostream>

enum Tipo { JPG, PNG, BMP };

struct Imagem
{
	char nome[20];
	int altura;
	int largura;
	Tipo tipo;
};

void Detalhes(Imagem*);

int main(void)
{
	Imagem img = { "back.png", 1920, 1080, PNG };
	Detalhes(&img);

	return 0;
}

void Detalhes(Imagem * pi)
{
	std::cout << "A imagem \"" << pi->nome << "\" com tamanho ";
	std::cout << pi->altura << "x" << pi->largura << " tem formato ";
	
	if (pi->tipo == JPG)
		std::cout << "JPG." << std::endl;
	if (pi->tipo == PNG)
		std::cout << "PNG." << std::endl;
	if (pi->tipo == BMP)
		std::cout << "BMP." << std::endl;

	return;
}