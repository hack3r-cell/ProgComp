#include "Calculo.h"
#include <cmath>
#define PI 3.14159265

double calcularModuloV(double x, double y)
{
	return sqrt(pow(x, 2) + pow(y, 2));
}

double calcularGraus(double x, double y)
{
	return atan2(y, x) * 180 / PI;
}