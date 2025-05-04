#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");

	cout << "Que horas são? ";
	int hora, minuto;
	char doisPontos;
	cin >> hora >> doisPontos >> minuto;
	hora = hora + 1;

	cout << "O seu relógio está atrasado." << endl;
	cout << "Agora são " << hora << doisPontos << minuto << "." << endl;

	return 0;
}