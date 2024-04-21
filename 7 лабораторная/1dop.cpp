#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int n = 6;

	int sum=0;
	int arr[n]{};

	cout << "Введите элементы массива (6): \n";

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout <<"\n\n";

	for (int i = 1; i < n; i+=2)
	{
		sum += arr[i];
		
	}
	cout << "Сумма чётных элементов: " << sum << endl;

	return 0;
}