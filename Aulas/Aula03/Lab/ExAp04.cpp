#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");

	cout << "Custo de fábrica: ";
	int custoFabrica;
	cin >> custoFabrica;

	int custoConsumidor = custoFabrica + (custoFabrica * 28 / 100) + (custoFabrica * 45 / 100);
	cout << "O custo ao consumidor é de R$" << custoConsumidor << "." << endl;

	return 0;
}