#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;

// protótipo da função
float calcularGraus(float, float);

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Digite as coordenadas do vetor:" << endl;
	
	cout << "x: ";
	float x;
	cin >> x;

	cout << "y: ";
	float y;
	cin >> y;

	float anguloVetor = calcularGraus(x, y);
	cout << "O ângulo do vetor é " << anguloVetor << " graus." << endl;

	return 0;
}

// definição da função
float calcularGraus(float x, float y)
{
	return atan2(y, x) * 180 / PI;
}