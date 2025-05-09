#include <iostream>
using namespace std;

char converteCodigo(int);

int main(void)
{
	system("chcp 1252 > nul");

	cout << converteCodigo(80);
	cout << converteCodigo(114);
	cout << converteCodigo(111);
	cout << converteCodigo(103);
	cout << converteCodigo(67);
	cout << converteCodigo(111);
	cout << converteCodigo(109);
	cout << converteCodigo(112);
	cout << endl;

	return 0;
}

char converteCodigo(int codigo)
{
	return codigo;
}