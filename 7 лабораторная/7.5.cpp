#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double c, sum = 0;

	const int n = 5;

	double a;
	double x[n]{};

	cout<< "Введите элементы массива (5): \n";
	cin >> x[0];
	a = x[0];
	for (int i = 1; i < n; i++)
	{
		cin >> x[i];
		if (a > x[i])
		{
			a = x[i];
		}

	}
	cout << "min  " << a << endl;

	for (int i = 0; i < n; i++)
	{
		sum += x[i]/(1 + x[i]);
	}
	c = a+sum;

	cout << "c равно: " << c << endl;
	return 0;
}