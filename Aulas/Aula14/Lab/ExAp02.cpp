#include <iostream>
#include <iomanip>

struct Horario
{
	int horas;
	int minutos;
};

void MostrarHorario(Horario*);

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Que horas são? ";
	Horario horario = {};

	std::cin >> horario.horas;
	std::cin.ignore();
	std::cin >> horario.minutos;

	Horario* ptr = &horario;

	MostrarHorario(ptr);

	return 0;
}

void MostrarHorario(Horario * ph)
{
	ph->horas = ph->horas + 1;
	std::cout << "Seu relógio está atrasado, o horário correto é ";
	std::cout << std::setw(2) << std::setfill('0') << ph->horas;
	std::cout << ":";
	std::cout << std::setw(2) << std::setfill('0') << ph->minutos;
	std::cout << "." << std::endl;

	return;
}