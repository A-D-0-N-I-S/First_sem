#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double q = 0;

	const int n = 5;

	double p = 0;
	double y[n]{};

	cout << "Введите элементы массива (5): \n";

	for (int i = 0; i < n; i++)
	{
		cin >> y[i];
		

	}
	p = y[0];
	for (int i = 1; i < n; i++)
	{
		if (p > y[i])
		{
			p = y[i];
		}
	}
	cout << "min  " << p << endl;

	for (int i = 0; i < n; i++)
	{
		q += (y[i] - 5) + p;
	}
	

	cout << "q равно: " << q << endl;
	return 0;
}