#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;
// ВАРИАНТ 5
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double w, v, b, x, a;
	b = 40;
	x = 1.1;
	a = 5e-6;

	w = (a + b) * tan(x) / (x + 1);
	v = 1 / 2 * b - sqrt(w - a * b);

	cout << "Результат w равен " << w << endl << endl;
	cout << "Результат v равен " << v << endl << endl;

	system("pause");

}
