#include <iostream>
#include <iomanip>

struct horario
{
	unsigned short hora;
	unsigned short minuto;
};

std::istream& operator>>(std::istream&, horario &);
std::ostream& operator<<(std::ostream&, horario &);
int operator-(horario, horario);

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Início: ";
	horario inicio;
	std::cin >> inicio;

	std::cout << "Fim: ";
	horario fim;
	std::cin >> fim;

	std::cout << "Entre " << inicio << " e " << fim;
	int diferenca = inicio - fim;
	std::cout << " existem " << diferenca << " minutos, isto é, " << diferenca / 60;
	std::cout << "h e " << diferenca % 60 << " minutos." << std::endl;

	return 0;
}

std::istream& operator>>(std::istream& is, horario& temp)
{
	is >> temp.hora;
	is.ignore();
	is >> temp.minuto;
	return is;
}

std::ostream& operator<<(std::ostream& os, horario& h)
{
	os << std::setw(2) << std::setfill('0') << h.hora;
	os << ":";
	os << std::setw(2) << std::setfill('0') << h.minuto;
	return os;
}

int operator-(horario ini, horario fim)
{
	return (fim.hora * 60 + fim.minuto) - (ini.hora * 60 + ini.minuto);
}