#include <iostream>

int main(void)
{
	system("chcp 1252 > nul");

	std::cout << "Torques : ";
	float torque[10] = { 2.5f, 8.1f, 3.4f, 9.2f, 5.7f, 9.6f, 6.3f, 8.0f, 5.4f, 4.9f };
	std::cout << torque[0] << ", " << torque[1] << ", " << torque[2] << ", " << torque[3] << ", ";
	std::cout << torque[4] << ", " << torque[5] << ", " << torque[6] << ", " << torque[7] << ", ";
	std::cout << torque[8] << ", " << torque[9] << std::endl << std::endl;

	float * ptr = torque;
	std::cout << "Primeiro: " << *ptr << std::endl;
	ptr = &torque[9];
	std::cout << "Último  : " << *ptr << std::endl;

	return 0;
}