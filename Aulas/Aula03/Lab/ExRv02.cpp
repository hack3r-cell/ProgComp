#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	cout << "Que horas são? ";
	int horas, minutos;
	char pontos;
	cin >> horas >> pontos >> minutos;

	cout << horas << " horas" << endl;
	cout << minutos << " minutos" << endl;
	
	return 0;
}