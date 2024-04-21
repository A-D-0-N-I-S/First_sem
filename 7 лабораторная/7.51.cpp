#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double sum = 0;

	const int n = 5;

	double a = 0;
	double b = 1;
	double x[n]{};

	cout << "Введите элементы массива (5): \n";

	for (int i = 0; i < n; i++)
	{
		cin >> x[i];

	}
	for (int i = 0; i < n; i++)
	{
		if (x[i]> 0)
		{
			a += x[i];
		}
		else 
		{
			b *= x[i];
		}
	}

	cout << "a равно: " <<a << endl;
	cout << "b равно: " << b << endl;
	return 0;
}