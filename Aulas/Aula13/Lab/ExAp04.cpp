#include <iostream>

//enum mes { JAN, FEV, MAR, ABR, MAI, JUN, JUL, AOG, SET, OUT, NOV, DEZ };
enum dia { DOM, SEG, TER, QUA, QUI, SEX, SAB };

int main(void)
{
	system("chcp 1252 > nul");

	//char meses[12][10] =
	//{
	//	"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
	//	"Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
	//};

	//for (mes ind = JAN; ind <= DEZ; ind = mes(ind + 1))
	//	std::cout << meses[ind] << std::endl;
	
	char dias[7][20] =
	{
		"Domingo", "Segunda-Feira", "Terça-Feira", "Quarta-Feira",
		"Quinta-Feira", "Sexta-Feira", "Sábado"
	};

	for (dia ind = DOM; ind <= SAB; ind = dia(ind + 1))
		std::cout << dias[ind] << std::endl;

	return 0;
}