#include <iostream>
#include <windows.h>
#include <cmath>
 
using namespace std;
// ВАРИАНТ 2
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x, y, z, n, b;

	n = 2;
	b = -0.12;
	x = 1.3e-4;
	
	
	z = 1 / (x - 1) + sin(x) - sqrt(n);
	y = (exp(-b) + 1) / 2 * z;

	cout << "Результат z равен " << z << endl << endl;
	cout << "Результат y равен " << y << endl<< endl;

	system("pause");

}