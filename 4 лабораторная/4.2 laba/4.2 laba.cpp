#include <iostream>
#include <windows.h>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double radius, p,q,a,r;

	cout << "Введите радиус окружности: ";
	cin >> radius;

	cout << "Введите диагональ p: ";
	cin >> p;

	cout << "Введите диагональ q: ";
	cin >> q;

	a = sqrt(p * p / 4 + q * q / 4);    //сторона ромба
	r = (p * q) / (4 * a);                 //радиус вписанной окружности       

	if (radius <= r)
	{
		cout << "Шар радиусом " << radius << " пролезет через ромб\n";
	}
	else
	{
		cout << "Шар с радиусом " << radius << " не пролезет через ромб\n";
	}

	cout << endl;
	_getch();

}