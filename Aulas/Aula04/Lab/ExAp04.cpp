#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159
using namespace std;

// protótipo da função
float volumeCilindro(int, int);

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Calcula o Volume de um Cilindro" << endl;
	cout << "-------------------------------" << endl;
	
	cout << "Entre com o raio da base: ";
	int raio;
	cin >> raio;

	cout << "Entre com a altura: ";
	int altura;
	cin >> altura;

	float volume = volumeCilindro(raio, altura);
	cout << "O volume do cilindro é ";
	cout << fixed << setprecision(3) << volume << endl;

	return 0;
}

// definição da função
float volumeCilindro(int raio, int altura)
{
	return PI * pow(raio, 2) * altura;
}