#include <iostream>
#include "Calculo.h"
using namespace std;

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Digite as coordenadas do vetor:" << endl;

	cout << "x: ";
	double x;
	cin >> x;

	cout << "y: ";
	double y;
	cin >> y;

	double resultado1 = calcularModuloV(x, y), resultado2 = calcularGraus(x, y);
	cout << endl;

	cout << "Coordenadas polares do vetor:" << endl;
	cout << "(" << resultado1 << ", " << resultado2 << ")" << endl;

	return 0;
}