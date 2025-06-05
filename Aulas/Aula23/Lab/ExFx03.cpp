#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
	system("chcp 1252 > nul");

	const char arquivo[] = "texto.txt";

	ifstream fin;
	fin.open(arquivo);

	if (!fin.is_open())
	{
		cout << "A abertura do arquivo " << arquivo << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	
	char letra;
	int vogais = 0, consoantes = 0, outras = 0, total = 0;
	fin.get(letra);
	while (!fin.eof())
	{
		switch (letra)
		{
			case 'a':
			case 'ã':
			case 'á':
			case 'à':
			case 'A':
			case 'Ã':
			case 'Á':
			case 'À':
			case 'e':
			case 'é':
			case 'è':
			case 'E':
			case 'É':
			case 'È':
			case 'i':
			case 'ì':
			case 'í':
			case 'I':
			case 'Ì':
			case 'Í':
			case 'o':
			case 'ó':
			case 'ò':
			case 'O':
			case 'Ó':
			case 'Ò':
			case 'u':
			case 'ú':
			case 'ù':
			case 'U':
			case 'Ú':
			case 'Ù':
				vogais++;
				break;
			case 'b':
			case 'B':
			case 'c':
			case 'C':
			case 'd':
			case 'D':
			case 'f':
			case 'F':
			case 'g':
			case 'G':
			case 'h':
			case 'H':
			case 'j':
			case 'J':
			case 'k':
			case 'K':
			case 'l':
			case 'L':
			case 'm':
			case 'M':
			case 'n':
			case 'N':
			case 'p':
			case 'P':
			case 'q':
			case 'Q':
			case 'r':
			case 'R':
			case 's':
			case 'S':
			case 't':
			case 'T':
			case 'v':
			case 'V':
			case 'w':
			case 'W':
			case 'x':
			case 'X':
			case 'y':
			case 'Y':
			case 'z':
			case 'Z':
				consoantes++;
				break;
			default:
				outras++;
		}
		total++;
		fin.get(letra);
	}
	cout << "O arquivo " << arquivo << " tem:\n";
	cout << "Vogais.........:\t" << vogais << endl;
	cout << "Consoantes.....:\t" << consoantes << endl;
	cout << "Outras.........:\t" << outras << endl;
	cout << "Total de letras:\t" << total << endl;

	fin.close();

	return 0;
}