#include <iostream>

struct Login
{
	char nome[20];
	char senha[20];
};

int main(void)
{
	system("chcp 1252 > nul");

	Login administrador = { "admin", "admin123456" };

	std::cout << "Entre com o seu usuário e senha: ";
	Login usuario = {};
	std::cin >> usuario.nome >> usuario.senha;

	bool nomeCorreto = 0;
	for (int i = 0; administrador.nome[i]; i++)
	{
		if (usuario.nome[i] == administrador.nome[i])
			nomeCorreto = 1;
		else
			nomeCorreto = 0;
	}

	if (nomeCorreto)
	{
		bool senhaCorreta = 0;
		for (int i = 0; administrador.senha[i]; i++)
		{
			if (usuario.senha[i] == administrador.senha[i])
				senhaCorreta = 1;
			else
				senhaCorreta = 0;
		}
		if (senhaCorreta)
			std::cout << "Login e senha corretos." << std::endl;
		else
			std::cout << "Login e senha incorretos." << std::endl;
	}
	else
	{
		std::cout << "Login e senha incorretos." << std::endl;
	}

	return 0;
}