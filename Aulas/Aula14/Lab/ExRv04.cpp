#include <iostream>

struct peixe
{
	char tipo[20];
	float peso;
	int comprimento;
};

void exibir(peixe);
void exibir(peixe*);

int main(void)
{
	peixe p1 = { "Piaba", 6.2f, 5 };
	exibir(p1);
	exibir(&p1);

	return 0;
}

void exibir(peixe p)
{
	std::cout << "Sem ponteiro: " << p.tipo << " com " << p.peso << "g e " << p.comprimento << "cm" << std::endl;
	return;
}

void exibir(peixe * pt)
{
	std::cout << "Com ponteiro: " << pt->tipo << " com " << pt->peso << "g e " << pt->comprimento << "cm" << std::endl;
	return;
}