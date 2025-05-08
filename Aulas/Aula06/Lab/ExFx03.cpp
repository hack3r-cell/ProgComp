#include <iostream>
using namespace std;

int main(void)
{
	cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
	cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
	cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
	cout << "long long:\t" << sizeof(long long) << " bytes" << endl;
	cout << "Total:\t\t" << sizeof(short) + sizeof(int) + sizeof(long) + sizeof(long long) << " bytes" << endl;

	return 0;
}