#include <iostream>
using namespace std;

// protótipo da função
float calcularIMC(float, float);

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Índice de Massa Corporal (IMC)" << endl;
	cout << "------------------------" << endl;

	cout << "Altura: ";
	float altura;
	cin >> altura;

	cout << "Massa: ";
	float massa;
	cin >> massa;

	float imc = calcularIMC(altura, massa);
	cout << "IMC: " << imc << endl;

	return 0;
}

// definição da função
float calcularIMC(float altura, float massa)
{
	return massa / (altura * altura);
}