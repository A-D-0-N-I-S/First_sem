#include <iostream>
#include <windows.h>

using namespace std;
// 8 Вариант 
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x, j, y, s, t;

	x = 0.1;
	j = 12;
	y = 5 * 10e-6;


	s = 0.4 * x - 1 / j * tan(y);
	t = s - sin(s);

	cout << "Результат s = " << s << endl << endl;
	cout << "Результат t = " << t << endl;

	system("pause");
}
