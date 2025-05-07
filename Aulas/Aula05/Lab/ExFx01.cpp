#include <iostream>
using namespace std;

// protótipo da função
void mostrarHora(int, int);

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Entre com o número de horas: ";
	int hora;
	cin >> hora;

	cout << "Entre com o número de minutos: ";
	int minuto;
	cin >> minuto;

	cout << "Agora são: ";
	mostrarHora(hora, minuto);

	return 0;
}

// definição da função
void mostrarHora(int hora, int minuto)
{
	cout << hora << ":" << minuto << endl;
	return;
}