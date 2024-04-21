#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double c = 0;
	double a = 0.5;
	int b = 7;
	const int n = 5;

	double w= 0;
	
	double v[n]{};

	cout << "Введите элементы массива (5): \n";

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (v[0]>v[i])
		{
			c = v[i];
		}

	}
	cout << "max: " << c << endl;
	for (int i = 0; i < n; i++)
	{
		if (v[i] > 0)
		{
			w += a+v[i];
		}
		else
		{
			w *= b/v[i];
		}
	}

	cout << "w равно: " << w << endl;
	
	return 0;
}