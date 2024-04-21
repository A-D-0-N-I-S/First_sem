#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double q, t, sum=0;

	const int n = 6;
	t = 0.45;

	double x[n]{};

	cout << "Введите элементы массива (6): \n";

	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum += (x[i] + 1) / x[i];
	}
	q = t + sum;
	cout << "q равно: " << q << endl;

	return 0;
}