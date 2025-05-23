#include <iostream>

struct Login
{
	char nome[20];
	char senha[20];
};

bool autenticar(Login, Login);

int main(void)
{
	system("chcp 1252 > nul");

	Login administrador = { "admin", "admin123456" };

	std::cout << "Entre com o seu usuário e senha: ";
	Login usuario = {};
	std::cin >> usuario.nome >> usuario.senha;

	bool autorizado = autenticar(administrador, usuario);
	if (autorizado)
		std::cout << "Login e senha corretos." << std::endl;
	else
		std::cout << "Login e senha incorretos." << std::endl;

	return 0;
}

bool autenticar(Login adm, Login user)
{
	bool valido = 0;
	for (int i = 0; adm.nome[i]; i++)
	{
		if (user.nome[i] == adm.nome[i])
			valido = 1;
		else
			return 0;
	}
	if (valido)
	{
		for (int i = 0; adm.senha[i]; i++)
		{
			if (user.senha[i] == adm.senha[i])
				valido = 1;
			else
				return 0;
		}
	}
	return 0;
}
