#include <iostream>
#include <windows.h>;
#include <cmath>

using namespace std;
//15 ВАРИАНТ
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double y, r, a, b;
	 
	a = -1;
	b = 0;


	y = a * exp(-2*b) - sqrt(1 + a);
	r = log(1 + 20 * b) / (1 + a);

	cout << "Функция y равна " << y << endl<< endl;
	cout << "Функция r равна " << r << endl << endl;

	system("pause");
}