#include <iostream>

struct complexo
{
	float real;
	float img;
};

complexo operator+(complexo, complexo);
complexo operator*(complexo, complexo);
std::ostream& operator<<(std::ostream&, complexo&);
std::istream& operator>>(std::istream&, complexo&);

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Primeiro complexo: ";
	complexo c1;
	std::cin >> c1;

	std::cout << "Segundo complexo: ";
	complexo c2 ;
	std::cin >> c2;

	complexo soma = c1 + c2;
	complexo multiplicacao = c1 * c2;

	std::cout << "A soma dos números: " << soma << std::endl;
	std::cout << "A multiplicação dos números: " << multiplicacao << std::endl;

	return 0;
}

complexo operator+(complexo a, complexo b)
{
	complexo c;
	c.real = a.real + b.real;
	c.img = a.img + b.img;
	return c;
}

complexo operator*(complexo a, complexo b)
{
	complexo c;
	c.real = a.real * b.real - a.img * b.img;
	c.img = a.img * b.real + a.real * b.img;
	return c;
}

std::ostream& operator<<(std::ostream& os, complexo &c)
{
	os << c.real;
	os << std::showpos;
	os << c.img;
	os << std::noshowpos;
	os << "i";
	return os;
}

std::istream& operator>>(std::istream& is, complexo &temp)
{
	is >> temp.real;
	is >> temp.img;
	is.ignore();

	return is;
}