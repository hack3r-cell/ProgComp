#include <iostream>

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
	t->estado[0] = 'V';
	t->estado[1] = 'a';
	t->estado[2] = 'z';
	t->estado[3] = 'i';
	t->estado[4] = 'a';
	t->estado[5] = '\0';
	return;
}