#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num1, num2, num3, num4;

	cout << "Эта программа определяет и выводит чётные числа\n";

	cout << "Введите числа\n\n";

	cout << "Число 1 = ";
	cin >> num1;

	cout << "Число 2 = ";
	cin >> num2;

	cout << "Число 3 = ";
	cin >> num3;

	cout << "Число 4 = ";
	cin >> num4;
	cout << endl;

	if (num1 % 2 == 0)
	{
		cout << "Число " << num1 << " чётное\n";
	}
	/*else*/if (num2 % 2 == 0)
	{
		cout << "Число " << num2 << " чётное\n";
	}
	/*else*/if (num3 % 2 == 0)
	{
		cout << "Число " << num3 << " чётное\n";
	}
	/*else*/if (num4 % 2 == 0)
	{
		cout << "Число " << num4 << " чётное\n";
	}
	else
	{
		cout << "Среди заданных чисел чётных нет!\n";
	}

}