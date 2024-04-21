#include <iostream>
#include <Windows.h>

using namespace std;
// 15 вариант
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a, b, e;
	double x, s = 0;
	int i = 0;


	cout << "Wrong a, b, e: \n";
	cin >> a >> b >> e;
	cout << "\n";


	while (i < 1) // Ничего лучше while я не нашел
	{
		x = (a + b) / 2;
		if ((sin(x) + 2 + x) * (sin(a) + 2 + a) <= 0)
		{
			b = x;
		}
		else
		{
			a = x;
		}
		while (true)
		{
			if (abs(a - b) <= 2 * e)
			{
				i = 1;
				break;
			}
			break;
		}
	}

	cout << x;
	return 0;
}