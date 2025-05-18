#include <iostream>
#include <iomanip>

constexpr int tamanho = 18;

struct data
{
	int dia;
	int mes;
	int ano;
};

struct horario
{
	int hora;
	int minuto;
};

struct evento
{
	data data;
	horario horario;
	char descricao[tamanho];
};

int main(void)
{
	system("chcp 1252 > nul");

	evento eventos[2] = {};

	std::cout << "Entre com 2 eventos:" << std::endl;

	std::cout << "#01" << std::endl;
	std::cout << "Data     : ";
	std::cin >> eventos[0].data.dia;
	std::cin.ignore();
	std::cin >> eventos[0].data.mes;
	std::cin.ignore();
	std::cin >> eventos[0].data.ano;
	std::cout << "Hora     : ";
	std::cin >> eventos[0].horario.hora;
	std::cin.ignore();
	std::cin >> eventos[0].horario.minuto;
	std::cin.ignore();
	std::cout << "Descrição: ";
	std::cin.getline(eventos[0].descricao, tamanho);

	std::cout << "#02" << std::endl;
	std::cout << "Data     : ";
	std::cin >> eventos[1].data.dia;
	std::cin.ignore();
	std::cin >> eventos[1].data.mes;
	std::cin.ignore();
	std::cin >> eventos[1].data.ano;
	std::cout << "Hora     : ";
	std::cin >> eventos[1].horario.hora;
	std::cin.ignore();
	std::cin >> eventos[1].horario.minuto;
	std::cin.ignore();
	std::cout << "Descrição: ";
	std::cin.getline(eventos[1].descricao, tamanho);

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Eventos Cadastrados" << std::endl;

	std::cout << std::setw(2) << std::setfill('0') << eventos[0].data.dia;
	std::cout << "/";
	std::cout << std::setw(2) << std::setfill('0') << eventos[0].data.mes;
	std::cout << "/" << eventos[0].data.ano << " ";
	std::cout << std::setw(2) << std::setfill('0') << eventos[0].horario.hora;
	std::cout << ":";
	std::cout << std::setw(2) << std::setfill('0') << eventos[0].horario.minuto << " ";
	std::cout << eventos[0].descricao << std::endl;

	std::cout << std::setw(2) << std::setfill('0') << eventos[1].data.dia;
	std::cout << "/";
	std::cout << std::setw(2) << std::setfill('0') << eventos[1].data.mes;
	std::cout << "/" << eventos[1].data.ano << " ";
	std::cout << std::setw(2) << std::setfill('0') << eventos[1].horario.hora;
	std::cout << ":";
	std::cout << std::setw(2) << std::setfill('0') << eventos[1].horario.minuto << " ";
	std::cout << eventos[1].descricao << std::endl;

	return 0;
}
