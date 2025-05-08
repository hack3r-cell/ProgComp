#include <iostream>
#include <iomanip>
#define PAO 0.30
#define PASTEL 0.25
using namespace std;

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Pães&Cia" << endl << endl;

	cout << "Quantos pães? ";
	int paes;
	cin >> paes;

	cout << "Quantos pastéis? ";
	int pasteis;
	cin >> pasteis;

	float total = paes * PAO + pasteis * PASTEL;
	cout << endl << fixed << setprecision(2) << "O total das compras é R$" << total << endl;

	return 0;
}