#include <iostream>
using namespace std;

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Digite o horário de partida (HH:MM): ";
	int horaInicial, minutoInicial;
	char doisPontos;
	cin >> horaInicial >> doisPontos >> minutoInicial;

	cout << "Digite o horário de chegada (HH:MM): ";
	int horaFinal, minutoFinal;
	cin >> horaFinal >> doisPontos >> minutoFinal;

	int tempoViagem = (horaFinal * 60 + minutoFinal) - (horaInicial * 60 + minutoInicial);
	int horaViagem = tempoViagem / 60;
	int minutoViagem = tempoViagem % 60;
	cout << endl << "O tempo total de viagem foi de " << horaViagem << " horas e " << minutoViagem << " min." << endl;

	return 0;
}