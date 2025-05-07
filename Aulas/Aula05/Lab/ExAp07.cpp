#include <iostream>
using namespace std;

// protótipo das funções
float calcularQuadrado(float);
float calcularCubo(float);

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Digite um valor: ";
	float x;
	cin >> x;

	float quadrado = calcularQuadrado(x);
	cout << "Quadrado = " << quadrado << endl;

	float cubo = calcularCubo(x);
	cout << "Cubo = " << cubo << endl;

	float cuboQuadrado = calcularCubo(calcularQuadrado(x));
	cout << "Cubo do quadrado = " << cuboQuadrado << endl;

	return 0;
}

// definição das funções
float calcularQuadrado(float x)
{
	return x * x;
}

float calcularCubo(float x)
{
	return x * x * x;
}