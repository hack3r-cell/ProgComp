#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");

	int ladoA, ladoB, area, altura, volume;

	cout << "Lado a: ";
	cin >> ladoA;

	cout << "Lado b: ";
	cin >> ladoB;

	area = ladoA * ladoB;
	cout << "Área da base = " << area << endl;

	cout << "Altura: ";
	cin >> altura;

	volume = area * altura;
	cout << "Volume do prisma = " << volume << endl;

	return 0;
}