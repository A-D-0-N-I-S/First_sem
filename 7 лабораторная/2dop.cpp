#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int min = 0;
	int index = 0;
	
	const int N = 5;



	double arr[N]{};

	cout << "Введите элементы массива (5): \n";

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		if (arr[i] < 0)
		{
			min = arr[i];
			index = i+1;

			
		}
	}
	cout << endl;
	cout << "Последнее отрицательное число: "<< min << endl;
	cout << "Его порядковый номер: " << index << endl;
	
	return 0;
}