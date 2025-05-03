#include <iostream>
using namespace std;

int main()
{
	cout << left; cout.width(13); cout << "Produto";
	cout << left; cout.width(12); cout << "Preco/Kg";
	cout << left; cout.width(13); cout << "Pedido (Kg)";
	cout << left; cout.width(15); cout << "Total Parcial";
	cout << endl;
	
	cout << left; cout.width(13); cout << "----------";
	cout << left; cout.width(12); cout << "---------";
	cout << left; cout.width(13); cout << "-----------";
	cout << left; cout.width(15); cout << "---------------";
	cout << endl;

	cout << left; cout.width(13); cout << "Alface";
	cout << left; cout.width(12); cout << "R$ 1,25/Kg";
	cout << left; cout.width(13); cout << "3,2Kg";
	cout << left; cout.width(15); cout << "R$ 4,00";
	cout << endl;

	cout << left; cout.width(13); cout << "Beterraba";
	cout << left; cout.width(12); cout << "R$ 0,65/Kg";
	cout << left; cout.width(13); cout << "6,0Kg";
	cout << left; cout.width(15); cout << "R$ 3,90";
	cout << endl;

	cout << left; cout.width(13); cout << "Cenoura";
	cout << left; cout.width(12); cout << "R$ 0,90/Kg";
	cout << left; cout.width(13); cout << "10Kg";
	cout << left; cout.width(15); cout << "R$ 9,00";
	cout << endl;
	return 0;
}