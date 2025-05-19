#include <iostream>

struct peixe
{
	char tipo[20];
	float peso;
	int comprimento;
};

int main(void)
{
	peixe p1 = { "Piaba", 6.2f, 5 };
	peixe * pt = &p1;

	std::cout << p1.tipo << " " << p1.peso << " " << p1.comprimento << std::endl;
	std::cout << pt->tipo << " " << pt->peso << " " << pt->comprimento << std::endl;

	return 0;
}