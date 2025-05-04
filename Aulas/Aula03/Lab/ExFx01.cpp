#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	int segundos, minutos;

	cout << "Digite uma quantidade de minutos: ";
	cin >> minutos;
	segundos = 60 * minutos;
	cout << "Existem " << segundos << " segundos em ";
	cout << minutos << " minutos.";
	cout << endl;	
	return 0;
}