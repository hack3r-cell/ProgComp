#include <iostream>

constexpr int aulas = 66;

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite as notas e frequência da disciplina" << std::endl;
	float notas[4] = {};

	std::cout << "Nota 1: ";
	std::cin >> notas[0];

	std::cout << "Nota 2: ";
	std::cin >> notas[1];

	std::cout << "Nota 3: ";
	std::cin >> notas[2];

	std::cout << "Faltas: ";
	int faltas;
	std::cin >> faltas;

	int permitido = aulas * 75 / 100;
	float media = (notas[0] + notas[1] + notas[2]) / 3.0f;

	if (faltas > permitido || media < 3.25f)
	{
		std::cout << "Reprovado" << std::endl;
		exit(EXIT_SUCCESS);
	}
	
	std::cout << "4ª Prova" << std::endl;
	std::cout << "Digite sua 4ª nota: ";
	std::cin >> notas[3];
	media = notas[3];

	if (media < 6.0f)
	{
		std::cout << "Reprovado" << std::endl;
		exit(EXIT_SUCCESS);
	}

	std::cout << "Aprovado" << std::endl;

	return 0;
}