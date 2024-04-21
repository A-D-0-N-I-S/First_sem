#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int min = 0, max=0;
	int index_max = 0, index_min=0;
	int element = 0;
	const int N = 8;

	double arr[N]{};

	cout << "Введите элементы массива (8): \n";

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];

		if (max < arr[i])
		{	
			max = arr[i];
			index_max = i;
		}
		if (min > arr[i])
		{
			min = arr[i];
			index_min = i;
		}
		
	}
	cout << endl;
	element = (index_max - index_min)+1;
	cout <<"Кол-во элементов между max и min значениями: "<< element << endl;
	
	cout << "max " << max << endl;
	cout << "min " << min << endl;

	return 0;
}