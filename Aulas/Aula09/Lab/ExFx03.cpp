#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Entre com o número de segundos: ";
	int segundos;
	std::cin >> segundos;

	int diaSegundos = segundos / 86'400;
	int horaSegundos = (segundos % 86'400) / 3'600;
	int minutoSegundos = ((segundos % 86'400) % 3'600) / 60;
	int segundosSeg = ((segundos % 86'400) % 3'600) % 60;

	std::cout << segundos << " segundos = " << diaSegundos << " dias, ";
	std::cout << horaSegundos << " horas, " << minutoSegundos << " minutos ";
	std::cout << "e " << segundosSeg << " segundos" << std::endl;

	return 0;
}