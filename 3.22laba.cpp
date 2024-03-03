#include <iostream>
#include <Windows.h>

using namespace std;
//Вариант  4.2
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x, y, z, arif, geom;

	cout << "Введите числа x, y, z \n";

	cout << "x = ";
	cin >> x;

	cout << "y = ";
	cin >> y;

	cout << "z = ";
	cin >> z;
	cout << endl;

	x = abs(x);
	y = abs(y);
	z = abs(z);

	arif = (x + y + z) / 3;
	geom = pow(x * y * z, 1/3.0);

	cout << "Среднее арифметическое = " << arif << endl;
	cout << "Среднее геометрическое = " << geom << endl;

}