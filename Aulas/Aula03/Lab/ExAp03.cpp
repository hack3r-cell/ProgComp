#include <iostream>
using namespace std;

int main()
{
	system("chcp 1252 > nul");
	
	 /**
	 * E = METS X PESO X (Tempo de Atividade / 60)
	 * Tempo de Atividade é em minutos
	 * Ciclismo ou corrida tem pontuação METS = 7.0
	 * Natação tem pontuação METS = 8.0
	 */

	cout << "Digite seu peso em quilos: ";
	int peso;
	cin >> peso;

	cout << "Digite o tempo de corrida: ";
	int horaCorrida, minutoCorrida;
	char hora, minuto;
	cin >> horaCorrida >> hora >> minutoCorrida >> minuto;

	cout << "Digite o tempo de ciclismo: ";
	int horaCiclismo, minutoCiclismo;
	cin >> horaCiclismo >> hora >> minutoCiclismo >> minuto;

	cout << "Digite o tempo de natação: ";
	int horaNatacao, minutoNatacao;
	cin >> horaNatacao >> hora >> minutoNatacao >> minuto;

	float caloriasCorrida = 7.0f * peso * ((horaCorrida * 60 + minutoCorrida) / 60.0f);
	float caloriasCiclismo = 7.0f * peso * ((horaCiclismo * 60 + minutoCiclismo) / 60.0f);
	float caloriasNatacao = 8.0f * peso * ((horaNatacao * 60 + minutoNatacao) / 60.0f);
	float totalCalorias = caloriasCorrida + caloriasCiclismo + caloriasNatacao;

	cout << "Você gastou um total de " << totalCalorias << " calorias." << endl;

	return 0;
}