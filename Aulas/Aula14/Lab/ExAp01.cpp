#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

struct Tigela
{
	char estado[6];
	char alimento[6];
};

void Fome(Tigela*);

int main(void)
{
	Tigela tigela = { "Cheia", "Sopa" };

	std::cout << "Antes da janta: " << tigela.estado << std::endl;
	Fome(&tigela);
	std::cout << "Depois da janta: " << tigela.estado << std::endl;
	
	return 0;
}

void Fome(Tigela * t)
{
	strcpy(t->estado, "Vazia");
	return;
}
