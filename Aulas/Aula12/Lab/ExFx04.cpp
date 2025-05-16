#include <iostream>
#include <cmath>

struct data
{
	unsigned short dia;
	unsigned short mes;
	unsigned short ano;
};

std::istream& operator>>(std::istream&, data&);
std::ostream& operator<<(std::ostream&, data&);
int operator-(data, data);

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Data de nascimento: ";
	data nascimento;
	std::cin >> nascimento;

	std::cout << "Data de hoje: ";
	data atualmente;
	std::cin >> atualmente;

	std::cout << "Você tem " << nascimento - atualmente << " dias de vida." << std::endl;

	return 0;
}

std::istream& operator>>(std::istream& is, data &temp)
{
	is >> temp.dia;
	is.ignore();
	is >> temp.mes;
	is.ignore();
	is >> temp.ano;
	return is;
}

std::ostream& operator<<(std::ostream &os, data &d)
{
	os << d.dia << "/" << d.mes << "/" << d.ano;
	return os;
}

int operator-(data nascimento, data atualmente)
{
	return ((atualmente.ano - nascimento.ano) * 365) + (std::abs(atualmente.mes - nascimento.mes) * 31) + std::abs(atualmente.dia - nascimento.dia);
}