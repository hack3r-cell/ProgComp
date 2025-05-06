#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	system("chcp 1252 > nul");

	int pX, pY, qX, qY;

	cout << "Ponto P:" << endl;
	cin >> pX >> pY;

	cout << "Ponto Q:" << endl;
	cin >> qX >> qY;

	float distancia = sqrt(pow((qX - pX), 2) + pow((qY - pY), 2));
	cout << endl << "A distância entre P e Q é: " << distancia << endl;


	return 0;
}