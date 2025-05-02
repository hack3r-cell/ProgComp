/*
	O programa ler e exibi os caracteres enviados pelo teclado.
	Porém não consegue exibir os caracteres...
*/
#include <iostream>
using namespace std;

int main()
{
	// exibindo uma frase que contém acentos
	cout << "Acentuação é possível?" << endl;

	// leia uma palavra que contém acentos
	char palavra[40];
	cin >> palavra;

	// exibindo o que foi lido
	cout << palavra << endl;
	return 0;
}