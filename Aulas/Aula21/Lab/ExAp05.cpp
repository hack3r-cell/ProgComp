#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	int contador = 0;
	int primos = 0;
	int primo = 0;

	for (int i = 1; primos < 1001; i++)
	{
		for (int j = 1; j <= i; j++)
			if (i % j == 0)
				contador++;
		
		if (contador == 2)
		{
			//std::cout << i << std::endl;
			primo = i;
			primos++;
		}
		contador = 0;
	}


	std::cout << "O 1001 número primo é " << primo << std::endl;

	return 0;
}
