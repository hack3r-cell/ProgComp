#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");

	cout << "A quantos anos você fuma? ";
	int anos;
	cin >> anos;

	cout << "Quantos cigarros você fuma por dia? ";
	int cigarrosPorDia;
	cin >> cigarrosPorDia;

	cout << "Qual o preço médio de uma carteira de cigarros? ";
	int precoMedioCarteira;
	cin >> precoMedioCarteira;

	float totalGasto = cigarrosPorDia * 30.0f / 20.0f * precoMedioCarteira * 12 * anos;
	cout << "Você gastou até agora R$" << totalGasto << " com cigarros." << endl;

	return 0;
}