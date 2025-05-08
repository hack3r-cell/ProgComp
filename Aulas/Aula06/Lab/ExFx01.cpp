#include <iostream>
#define ZERO 0
using namespace std;

int main(void)
{
	system("chcp 1252 > nul");

	int total = ZERO;
	cout << "Inicialmente total = " << total << endl;

	total = 50;
	cout << "Depois da atribuição total = " << total << endl;

	return ZERO;
}