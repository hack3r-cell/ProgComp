#include <iostream>
using namespace std;

// protótipo da função
float converterTemp(float);

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Digite uma temperatura em graus Celsius: ";
	float celsius;
	cin >> celsius;

	float fahrenheit = converterTemp(celsius);
	cout << celsius << " graus Celsius equivalem a " << fahrenheit << " graus Fahrenheit." << endl;

	return 0;
}

// definição da função
float converterTemp(float celsius)
{
	return 1.8f * celsius + 32.0f;
}