#include <iostream>
using namespace std;

// protótipo das funções
void umTres(void);
void dois(void);

int main(void)
{
	system("chcp 1252 > nul");

	cout << "Começando agora:" << endl;
	umTres();
	cout << endl;
	cout << "Pronto!";
	cout << endl;

	return 0;
}

// definição das funções

void umTres(void)
{
	cout << "Um ";
	dois();
	cout << "Três ";
	return;
}

void dois(void)
{
	cout << "Dois ";
	return;
}