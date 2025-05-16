#include <iostream>

constexpr int tamanho = 20;

struct contaBancaria
{
	char identificador[tamanho];
	char nomeCliente[tamanho];
	float saldo;
};

struct palavra
{
	char portugues[tamanho];
	char ingles[tamanho];
	char espanhol[tamanho];
};

std::ostream& operator<<(std::ostream&, contaBancaria);
std::ostream& operator<<(std::ostream&, palavra);

int main(void)
{
	system("chcp 1252 > nul");

	contaBancaria conta = { "#0xfo11", "João Silva", 150.00f };
	palavra dicionario = { "cachorro", "dog", "perro" };

	std::cout << conta;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << dicionario;

	return 0;
}

std::ostream& operator<<(std::ostream& os, contaBancaria c)
{
	os << "Identificador da conta: " << c.identificador << std::endl;
	os << "Nome do cliente       : " << c.nomeCliente << std::endl;
	os.setf(std::ios_base::fixed, std::ios_base::floatfield);
	os.precision(2);
	os << "Saldo da Conta        : R$" << c.saldo << std::endl;
	return os;
}

std::ostream& operator<<(std::ostream& os, palavra p)
{
	os << "Português: " << p.portugues << std::endl;
	os << "Ingles   : " << p.ingles << std::endl;
	os << "Espanhol : " << p.espanhol << std::endl;
	return os;
}