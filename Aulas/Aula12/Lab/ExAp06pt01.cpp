#include <iostream>
#include <iomanip>

struct horario
{
	unsigned short hora;
	unsigned short minuto;
};

horario ler(void);
void exibir(horario);
int calcularHorario(horario, horario);

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Início: ";
	horario inicio = ler();

	std::cout << "Fim: ";
	horario fim = ler();

	std::cout << "Entre ";
	exibir(inicio);
	std::cout << " e ";
	exibir(fim);
	int diferenca = calcularHorario(inicio, fim);
	std::cout << " existem " << diferenca << " minutos, isto é, " << diferenca / 60;
	std::cout << "h e " << diferenca % 60 << " minutos." << std::endl;
	
	return 0;
}

horario ler(void)
{
	horario temp;
	std::cin >> temp.hora;
	std::cin.ignore();
	std::cin >> temp.minuto;
	return temp;
}

void exibir(horario h)
{
	std::cout << std::setw(2) << std::setfill('0') << h.hora;
	std::cout << ":";
	std::cout << std::setw(2) << std::setfill('0') << h.minuto;
	return;
}

int calcularHorario(horario ini, horario fim)
{
	return (fim.hora * 60 + fim.minuto) - (ini.hora * 60 + ini.minuto);
}