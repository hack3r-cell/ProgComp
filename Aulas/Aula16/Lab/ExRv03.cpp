#include <iostream>

void exibir(int[]);
void exibir(int[], int);

int main(void)
{
	int vet1[] = { 15, 29, 48, 10, 35 };
	int vet2[] = { 20, 35, 50, 65, 80, 95, 100, 110, 130 };
	int tam2 = sizeof(vet2) / sizeof(int);
	exibir(vet1);
	exibir(vet2, tam2);

	return 0;
}

void exibir(int vet[])
{
	for (int i = 0; i < 5; i++)
		std::cout << vet[i] << " ";
	std::cout << std::endl;
	return;
}

void exibir(int vet[], int tam)
{
	for (int i = 0; i < tam; i++)
		std::cout << vet[i] << " ";
	std::cout << std::endl;
	return;
}