#include <iostream>
using namespace std;

float imc(float, float);
double imc(double, double);

int main(void)
{
	// 6 dígitos
	cout << fixed;
	cout.precision(6);
	cout << imc(1.75f, 80.0f) << endl;
	cout << imc(1.75, 80.0) << endl;

	cout << endl << endl;

	// 10 dígitos
	cout << fixed;
	cout.precision(10);
	cout << imc(1.75f, 80.0f) << endl;
	cout << imc(1.75, 80.0) << endl;


	return 0;
}

float imc(float altura, float peso)
{
	return peso / (altura * altura);
}

double imc(double altura, double peso)
{
	return peso / (altura * altura);
}