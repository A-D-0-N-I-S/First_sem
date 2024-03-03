#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c, sum = 0;
	int a1 = 0,b1 = 0;
	

	cout << "Введите три числа\n";

	cout << "Первое число = ";
	cin >> a;
	cout << "Второе число = ";
	cin >> b;
	cout << "Третье число = ";
	cin >> c;
	cout << endl;

	/*if (a % 5 == 0 || a % 5 == 5)
	{
		a1 = a;
		sum = a1;
	}
	
	if (b % 5 == 0 || b % 5 == 5)
	{
		 b1 = b;
		sum = b1 + a1;
	}

	if (c % 5 == 0 || c % 5 == 5)
	{
		sum = c + b1 +a1;
	}*/

	

	(a % 5 == 5) ? sum = sum + a : printf("Error\n");
	(b % 5 == 5) ? sum = sum + b : printf("Error\n");
	(c % 5 == 5) ? sum = sum + c : printf("Error\n");

	cout << endl;
	cout <<"Сумма = "<< sum;
	cout << endl;
	cout << endl;

	system("PAUSE");

}