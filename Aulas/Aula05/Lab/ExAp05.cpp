#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;

// protótipo da função
double calcularGraus(double, double);

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

	double anguloVetor = calcularGraus(x, y);
	cout << "O ângulo do vetor é " << anguloVetor << " graus." << endl;

	return 0;
}

// definição da função
double calcularGraus(double x, double y)
{
	return atan2(y, x) * 180 / PI;
}
