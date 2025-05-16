#include <iostream>

constexpr int tamanho = 20;

struct contaBancaria
{
	char identificador[tamanho];
	char nomeCliente[tamanho];
	float saldo;
};

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Entre com os dados da conta:" << std::endl;
	contaBancaria conta = {};
	std::cin.getline(conta.identificador, tamanho);
	std::cin.getline(conta.nomeCliente, tamanho);
	
	std::cout << "----------------------------------------------------" << std::endl;

	std::cout << "Conta criada com sucesso!" << std::endl;
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(2);
	std::cout << "Saldo da conta R$" << conta.saldo << std::endl;
	std::cout << "Quanto você deseja depositar? R$";
	std::cin >> conta.saldo;

	std::cout << "Dinheiro depositado..." << std::endl;
	std::cout << "Seu saldo agora é de R$" << conta.saldo << std::endl;

	return 0;
}