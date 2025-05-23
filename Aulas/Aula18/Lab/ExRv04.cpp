#include <iostream>

bool StrEqual(const char *, const char *);

int main(void)
{
	char palavra[20] = "colega";

	if (StrEqual(palavra, "colega"))
		std::cout << "Iguais" << std::endl;
	else
		std::cout << "Diferentes" << std::endl;

	return 0;
}

bool StrEqual(const char * vet1, const char * vet2)
{
	int tamanho1;
	for (tamanho1 = 0; vet1[tamanho1]; tamanho1++)
		;

	int tamanho2;
	for (tamanho2 = 0; vet2[tamanho2]; tamanho2++)
		;

	if (tamanho1 != tamanho2)
		return false;

	int j = 0;
	while (vet1[j] != '\0' && vet1[j] == vet2[j])
		j++;

	if (j == tamanho1)
		return true;

	return false;
}