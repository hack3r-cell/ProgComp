#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)
{
	system("chcp 1252 > nul");

	srand(time(NULL));

	cout << "Gerando número pseudoaleatório:" << endl;

	int numero = rand();
	cout << numero << endl;

	if (numero > 16834) 
	{
		cout << "GRANDE" << endl;
	}
	else
	{
		cout << "PEQUENO" << endl;
	}

	return 0;
}