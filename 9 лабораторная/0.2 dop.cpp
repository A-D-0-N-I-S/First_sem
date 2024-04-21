#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

int main()
{
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int size, t=0;
	const int maxSize = 99;

	int arr[maxSize]{};

	cout << "Введите количество элементов массива: ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 99;
		cout << arr[i] << endl;
	}
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == arr[i + 1]) 
		{
			SetConsoleTextAttribute(h, 2);
			cout << "Пара: " << arr[i] <<" и "<< arr[i+1]<<endl;
			t++;
		}
	
	}
	cout << "Кол-во пар: " << t<<endl;
	SetConsoleTextAttribute(h, 15);

	return 0;
}