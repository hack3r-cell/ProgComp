#include <iostream>
#include <cmath>
using namespace std;

// protótipo da função
double calcularModuloV(double, double);

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

	double vetor = calcularModuloV(x, y);
	cout << "O tamanho do vetor é " << vetor << endl;

	return 0;
}

// definição da função
float calcularModuloV(double x, double y)
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
