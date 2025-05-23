#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	int naturais = 100;
	int somaDosQuadrados = 0;
	for (int i = 1; i <= naturais; i++)
		somaDosQuadrados = somaDosQuadrados + i * i;

	int quadradoDaSoma = 0;
	for (int i = 1; i <= naturais; i++)
		quadradoDaSoma = quadradoDaSoma + i;
	quadradoDaSoma = quadradoDaSoma * quadradoDaSoma;

	int diferencaDeQuadrados = quadradoDaSoma - somaDosQuadrados;
	std::cout << "Soma dos quadrados dos " << naturais << " primeiros números naturais   : " << somaDosQuadrados << std::endl;
	std::cout << "Quadrado da soma dos " << naturais << " primeiros números naturais     : " << quadradoDaSoma << std::endl;
	std::cout << "Difereça de quadrados dos " << naturais << " primeiros números naturais: " << diferencaDeQuadrados << std::endl;

	return 0;
}