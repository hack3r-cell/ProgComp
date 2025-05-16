#include <iostream>
#include <cmath>

struct data
{
	unsigned short dia;
	unsigned short mes;
	unsigned short ano;
};

data lerData(void);
void exibirData(data);
int calcularDias(data, data);

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Data de nascimento: ";
	data nascimento = lerData();

	std::cout << "Data de hoje: ";
	data atualmente = lerData();
	
	std::cout << "Você tem " << calcularDias(nascimento, atualmente) << " dias de vida." << std::endl;

	return 0;
}

data lerData(void)
{
	data temp;
	std::cin >> temp.dia;
	std::cin.ignore();
	std::cin >> temp.mes;
	std::cin.ignore();
	std::cin >> temp.ano;
	return temp;
}

void exibirData(data d)
{
	std::cout << d.dia << "/" << d.mes << "/" << d.ano;
}

int calcularDias(data nascimento, data atualmente)
{
	return ((atualmente.ano - nascimento.ano) * 365) + (std::abs(atualmente.mes - nascimento.mes) * 31) + std::abs(atualmente.dia - nascimento.dia);
}