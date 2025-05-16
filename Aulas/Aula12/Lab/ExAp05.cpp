#include <iostream>
#include <iomanip>

struct data
{
	unsigned short dia;
	unsigned short mes;
	unsigned short ano;
};

struct horario
{
	unsigned short horas;
	unsigned short minutos;
	unsigned short segundos;
};

struct evento
{
	data data;
	horario horario;
};

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Entre com dados do evento:" << std::endl;
	evento evento1 = {};
	std::cout << "Hora: ";
	std::cin >> evento1.horario.horas;
	std::cin.ignore();
	std::cin >> evento1.horario.minutos;
	std::cin.ignore();
	std::cin >> evento1.horario.segundos;

	std::cout << "Data: ";
	std::cin >> evento1.data.dia;
	std::cin.ignore();
	std::cin >> evento1.data.mes;
	std::cin.ignore();
	std::cin >> evento1.data.ano;

	std::cout << std::endl << "Evento marcado para o dia: ";
	std::cout << std::setw(2) << std::setfill('0') << evento1.data.dia;
	std::cout << "/";
	std::cout << std::setw(2) << std::setfill('0') << evento1.data.mes;
	std::cout << "/";
	std::cout << std::setw(2) << std::setfill('0') << evento1.data.ano;
	std::cout << " às ";
	std::cout << std::setw(2) << std::setfill('0') << evento1.horario.horas;
	std::cout << ":";
	std::cout << std::setw(2) << std::setfill('0') << evento1.horario.minutos;
	std::cout << ":";
	std::cout << std::setw(2) << std::setfill('0') << evento1.horario.segundos;
	std::cout << std::endl;

	return 0;
}