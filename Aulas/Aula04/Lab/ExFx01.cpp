#include <iostream>
using namespace std;

void sorria(void);

int main(void)
{
	system("chcp 1252 > nul");

	sorria(); sorria(); sorria(); sorria();
	cout << endl;
	sorria(); sorria();
	cout << endl;
	sorria();
	cout << endl;

	return 0;
}

void sorria(void)
{
	cout << "Sorria! ";
	return;
}