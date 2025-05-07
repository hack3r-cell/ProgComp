#include <iostream>
using namespace std;

// protótipo da função
float calcularMediaH(float, float);

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Entre com um número: ";
	float x;
	cin >> x;

	cout << "Entre com outro número: ";
	float y;
	cin >> y;

	float mediaHarmonica = calcularMediaH(x, y);
	cout << "A média harmônica dos números é " << mediaHarmonica << endl;

	return 0;
}

// definição da função
float calcularMediaH(float x, float y)
{
	return 2.0f * x * y / (x + y);
}