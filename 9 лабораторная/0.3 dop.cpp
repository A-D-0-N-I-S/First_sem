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

	int size, kol = 1;
	int max = 0;
	const int maxSize = 99;

	int arr[maxSize]{};

	cout << "Введите количество элементов массива: ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 2;
		cout << arr[i] << endl;
	}
	cout << "\n";
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == arr[i+1]) // ультражёсткая проверка
		{
			SetConsoleTextAttribute(h, 2);
			cout << "Пара: " << arr[i] << " и " << arr[i+1] << endl;
			
			kol++;
			if (kol>max)
			{
				max = kol;
			}
		}
		else
		{
			kol = 1;
		}

	}
	cout << "Hаибольшее число подряд идущих одинаковых элементов: " << max << endl;
	SetConsoleTextAttribute(h, 15);

	return 0;
}