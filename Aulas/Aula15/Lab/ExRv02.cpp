#include <iostream>

struct peixe
{
	char tipo[20];
	float peso;
	unsigned comp;
};

int main(void)
{
	peixe p1 = { "Tilapia", 6.0f, 4 };
	peixe * p2 = new peixe{ "Piaba", 6.2f, 5 };
	
	std::cout << p1.tipo << " com " << p1.peso << "g e " << p1.comp << "cm" << std::endl;
	std::cout << p2->tipo << " com " << p2->peso << "g e " << p2->comp << "cm" << std::endl;

	delete p2;

	return 0;
}