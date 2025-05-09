#include <iostream>

void alarme(void);
int lerSenha(void);

int main(void)
{
	alarme();
	int senha = lerSenha();
	std::cout << "Obrigado!" << std::endl;

	return 0;
}

void alarme(void)
{
	std::cout << "Iniciando com som...\a" << std::endl;
	return;
}

int lerSenha(void)
{
	std::cout << "Digite sua senha: ________\b\b\b\b\b\b\b\b";
	int senha;
	std::cin >> senha;
	return senha;
}