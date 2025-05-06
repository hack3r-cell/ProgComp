#include <iostream>
#include <cstdlib>
using namespace std;

// protótipo das funções
int inicializar(void);
void ligar(void);
void verificar(void);
void ativar(void);

int main(void)
{
	system("chcp 1252 > nul");

	int valor = inicializar();
	cout << endl;

	if (valor > 16384)
	{
		cout << "Sistema em funcionamento." << endl;
	}
	else
	{
		cout << "Falha na inicialização." << endl;
	}

	return 0;
}

// definição das funções
int inicializar(void)
{
	cout << "Inicializando sistema:" << endl;
	ligar();
	verificar();
	ativar();
	cout << "Inicialização concluída." << endl;
	return rand();
}

void ligar(void)
{
	cout << "- Ligando dispositivos" << endl;
	return;
}

void verificar(void)
{
	cout << "- Verificando integridade" << endl;
	return;
}

void ativar(void)
{
	cout << "- Ativando processos" << endl;
	return;
}