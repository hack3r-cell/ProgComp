#include <iostream>
using namespace std;

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Distância percorrida (km): ";
	float distancia;
	cin >> distancia;

	cout << "Litros de combustível: ";
	float litrosCombustivel;
	cin >> litrosCombustivel;

	float consumo = distancia / litrosCombustivel;
	cout << "O consumo do seu carro foi de " << consumo << " km/litro." << endl;

	return 0;
}