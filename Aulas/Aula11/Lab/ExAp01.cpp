#include <iostream>

bool checaSenha(char [], char []);

int main(void)
{
	char senhaSistema[9] = "ProgComp";

	std::cout << "Digite a senha: ";
	char senhaPassada[9];
	std::cin >> senhaPassada;

	bool senhaValida = checaSenha(senhaSistema, senhaPassada);
	if (senhaValida)
	{
		std::cout << "Senha correta!" << std::endl;
	}
	else
	{
		std::cout << "Senha incorreta!" << std::endl;
	}

	return 0;
}

bool checaSenha(char senhaSistema[], char senhaPassada[])
{
	for (int i = 0; senhaSistema[i]; i++)
	{
		if (senhaPassada[i] != senhaSistema[i])
		{
			return 0;
		}
	}
	return 1;
}