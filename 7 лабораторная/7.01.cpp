#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double c, sum = 0;

	const int n = 6;
	
	double a = 0;
	double x[n]{};

	cout << "Введите элементы массива (6): \n";

	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		if (a < x[i])
		{
			a = x[i];
		}

	}
	cout << "Максимум  " << a << endl;

	for (int i = 0; i < n; i++)
	{
		sum += a/(1 + x[i]);
	}
	c = sum;

	cout << "c равно: " << c << endl;
	return 0;
}