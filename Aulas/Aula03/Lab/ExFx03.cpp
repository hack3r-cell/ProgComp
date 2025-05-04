#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	
	cout << "Digite sua idade: ";
	int idade, dias;
	cin >> idade;
	dias = idade * 365;
	
	cout << idade << " anos equivalem a " << dias << " dias." << endl;

	return 0;
}