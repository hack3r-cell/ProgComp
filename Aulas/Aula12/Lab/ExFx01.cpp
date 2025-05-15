#include <iostream>

struct chocolate
{
	char marca[40];
	float peso;
	int calorias;
};

int main(void)
{
	chocolate lanche = { "Charge", 2.3f, 350 };
	std::cout << lanche.marca << " " << lanche.peso << " " << lanche.calorias << std::endl;

	return 0;
}