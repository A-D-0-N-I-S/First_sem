#include <iostream>
#include <windows.h>
#include <iomanip>
#include <stdio.h>
#include <conio.h>

using namespace std;
//6 Вариант
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x1, x2, y1, y2, length,c,d;

	cout << "Введите координаты первой точки: \n";

	cout << "x1 = ";
	cin >> x1;

	cout << "y1 = ";
	cin >> y1;
	cout << endl;

	cout << "Введите координаты второй точки: \n";

	cout << "x2 = ";
	cin >> x2;

	cout << "y2 = ";
	cin >> y2;
	cout << endl;

	c = pow(x2 - x1, 2.0);
	d = pow(y2 - y1, 2.0);

	length = sqrt (c + d);

	cout << "Растояние между точками = " << length<<endl;

	_getch();
}