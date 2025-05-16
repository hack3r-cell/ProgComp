#include <iostream>

constexpr int tamanho = 20;

struct palavra
{
	char portugues[tamanho];
	char ingles[tamanho];
	char espanhol[tamanho];
};

int main(void)
{
	system("chcp 1252 > nul");

	palavra dicionario[10] = {
		{ "cachorro", "dog", "perro" },
		{ "gato", "cat", "gato" }
	};

	std::cout << "Digite uma palavra em português, inglês e espanhol:" << std::endl << std::endl;
	
	std::cout << "Português: ";
	std::cin.getline(dicionario[2].portugues, tamanho);
	
	std::cout << "Inglês   : ";
	std::cin.getline(dicionario[2].ingles, tamanho);

	std::cout << "Espanhol : ";
	std::cin.getline(dicionario[2].espanhol, tamanho);

	std::cout << std::endl << std::endl << std::endl << "Dicionário:" << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	std::cout << "Português :\t" << dicionario[0].portugues << ", " << dicionario[1].portugues << ", " << dicionario[2].portugues << std::endl;
	std::cout << "Inglês    :\t" << dicionario[0].ingles << ", " << dicionario[1].ingles << ", " << dicionario[2].ingles << std::endl;
	std::cout << "Espanhol  :\t" << dicionario[0].espanhol << ", " << dicionario[1].espanhol << ", " << dicionario[2].espanhol << std::endl;
	std::cout << "----------------------------------------" << std::endl;

	return 0;
}