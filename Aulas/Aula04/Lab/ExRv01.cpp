#include <iostream>
#include <cstdlib>
using namespace std;

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Gerando números pseudoaleatórios: " << endl;
	
	srand(2);
	cout << rand() << " ";
	cout << rand() << " ";
	cout << rand() << " ";
	cout << rand() << endl;

	return 0;
}
