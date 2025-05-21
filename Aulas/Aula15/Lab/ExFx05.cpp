#include <iostream>

enum Situacao { Aprovado, Trancado, Reprovado };

union ID
{
	char nome[20];
	int matricula;
};

struct Aluno
{
	ID id;
	unsigned codigoDisciplina;
	Situacao situacao;
};

std::istream& operator>>(std::istream&, Situacao&);
void MostrarAluno(Aluno *, bool);

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Digite a quantidade de alunos: ";
	int quantidadeAlunos;
	std::cin >> quantidadeAlunos;

	Aluno * alunos = new Aluno[quantidadeAlunos];

	std::cout << "Digite:" << std::endl;
	std::cout << "[ 0 ] - Nome aluno" << std::endl;
	std::cout << "[ 1 ] - Matrícula Aluno" << std::endl;
	std::cout << "Escolha: ";
	bool tipoIdentificacao;
	std::cin >> tipoIdentificacao;

	if (tipoIdentificacao)
	{
		std::cout << "Digite a matrícula do aluno: ";
		std::cin >> alunos[0].id.matricula;
	}
	else
	{
		std::cout << "Digite o nome do aluno: ";
		std::cin.ignore();
		std::cin.getline(alunos[0].id.nome, 20);
	}

	std::cout << "Digite o código da disciplina (número): ";
	std::cin >> alunos[0].codigoDisciplina;

	std::cout << "Digite a situação do aluno:" << std::endl;
	std::cout << "[ 0 ] - Aprovado" << std::endl;
	std::cout << "[ 1 ] - Trancado" << std::endl;
	std::cout << "[ 2 ] - Reprovado" << std::endl;
	std::cout << "Escolha: ";
	std::cin >> alunos[0].situacao;

	MostrarAluno(alunos, tipoIdentificacao);

	delete [] alunos;

	return 0;
}

std::istream& operator>>(std::istream& is, Situacao& s)
{
	int temp;
	is >> temp;
	s = (Situacao) temp;
	return is;
}

void MostrarAluno(Aluno * pa, bool tipoId)
{
	std::cout << "----------------------------------------------------------" << std::endl;
	std::cout << "Dados do alunos" << std::endl;

	if (tipoId)
		std::cout << "Matrícula: " << pa->id.matricula << std::endl;
	else
		std::cout << "Nome: " << pa->id.nome << std::endl;

	std::cout << "Código da disciplina: " << pa->codigoDisciplina << std::endl;
	std::cout << "Situação do aluno: ";

	if (pa->situacao == Aprovado)
		std::cout << "Aprovado";
	if (pa->situacao == Trancado)
		std::cout << "Trancado";
	if (pa->situacao == Reprovado)
		std::cout << "Reprovado";

	std::cout << std::endl;
	return;
}