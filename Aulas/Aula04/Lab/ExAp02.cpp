#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Digite um ângulo: ";
	double angulo;
	cin >> angulo;

	double seno = sin(angulo * PI / 180);
	cout << "Seno = " << seno << endl;

	return 0;
}