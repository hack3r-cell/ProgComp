#include <iostream>
using std::cout;
using std::cin;
using std::endl;

char codificar(char);
char decodificar(char);

int main(void)
{
	cout << "Digite um caractere: ";
	char caractere;
	cin >> caractere;

	cout << "O caractere " << caractere << " codificado: ";
	caractere = codificar(caractere);
	cout << caractere << endl;

	cout << "O caractere " << caractere << " decodificado: ";
	caractere = decodificar(caractere);
	cout << caractere << endl;

	return 0;
}

char codificar(char ch)
{
	ch = ch + 3;
	return ch;
}

char decodificar(char ch)
{
	ch = ch - 3;
	return ch;
}