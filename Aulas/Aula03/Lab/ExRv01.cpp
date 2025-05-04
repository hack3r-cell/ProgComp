#include <iostream>
using namespace std;

int main()
{
	cout << "Entre com a altura, largura e comprimento:" << endl;
	float altura, largura, comprimento, volume;

	cin >> altura >> largura >> comprimento;
	volume = altura * largura * comprimento;
	
	cout << "O volume é " << volume << " cm cúbicos." << endl;
	
	return 0;
}