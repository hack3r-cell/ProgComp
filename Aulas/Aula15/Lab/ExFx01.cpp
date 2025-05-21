#include <iostream>
#include <print>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite o número de alunos (mínimo 2): ";
	int alunos;
	std::cin >> alunos;

	float* notas = new float[alunos];
	std::cout << "Digite a nota de dois alunos: ";
	std::cin >> notas[0] >> notas[1];

	std::cout << "As notas digitadas foram " << notas[0] << " e " << notas[1] << std::endl;

	delete[] notas;

	return 0;
}