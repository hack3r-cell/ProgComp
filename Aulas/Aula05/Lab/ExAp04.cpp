#include <iostream>
#include <cmath>
using namespace std;

// protótipo da função
float calcularModuloV(int, int);

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Digite as coordenadas do vetor:" << endl;

	cout << "x: ";
	int x;
	cin >> x;

	cout << "y: ";
	int y;
	cin >> y;

	float vetor = calcularModuloV(x, y);
	cout << "O tamanho do vetor é " << vetor << endl;

	return 0;
}

// definição da função
float calcularModuloV(int x, int y)
{
	return sqrt(pow(x, 2) + pow(y, 2));
}