#include<iostream>
#include <windows.h>
#include<ctime>

using namespace std;

int main()
{
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int maxSize = 99;

	int arr[maxSize]{};
	int a, y, week;
	int i = 0, s = 0, t = 0, quantity = 0;
	int size;

	cout << "Введите кол-во дней ";

	cin >> size;

	if (size <= 99 )
	{
		cout << "Кол-во осадков ежедневно: \n";

		for (i; i < size; i++)
		{
			arr[i] = rand() % 99;
			cout << arr[i] <<endl;
		}

		if (size > 7)
		{
			i = 0;
			for (a = 7; a <= size; a += 7) // увеличиваем на неделю
			{
				s = 0;
				for (i; i < a; i++)
				{
					s += arr[i];
				}
				t++;

				if (s > quantity)
				{
					quantity = s;
					week = t;
				}
			}

			a = size;
			y = size - a;
			s = 0;

			for (i; i < size; i++)
			{
				s += arr[i];
			}
			t++;
			if (s > quantity)
			{
				quantity = s;
				week = t;
			}
			SetConsoleTextAttribute(h, 2);
			cout << "Самое большое количество осадков, равное " << quantity << ", выпало на " << week << " неделе\n";
			SetConsoleTextAttribute(h, 7);
		}

		else
		{
			for (i = 0; i < size; i++)
			{
				s += arr[i];
			}
			SetConsoleTextAttribute(h, 2);
			cout << "Самое большое количество осадков, равное " << s << ", выпало на 1 неделе\n";
			SetConsoleTextAttribute(h, 7);

		}

	}

	else
	{
		SetConsoleTextAttribute(h, 4);
		cout << "Ошибка\n";
		SetConsoleTextAttribute(h, 7);
	}
}

//#include <iostream>
//#include <windows.h>
//#include <ctime>
//
//using namespace std;
//
//int main()
//{
//
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	srand(time(NULL));
//
//	int size, t = 0, sum = 0;
//	const int maxSize = 99;
//
//	int arr[maxSize]{};
//	int arr_sum[maxSize];
//
//	cout << "Введите количество ежедневных измерений: ";
//	cin >> size;
//	int week = size / 7;
//	cout << "Количество недель: " << week << "\n";
//
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 99;
//		cout << arr[i] << endl;
//	}
//	cout << "\n";
//	for (int i = 0; i < size; i++)
//	{
//		while (week -1 !=0)
//		{
//			sum += arr[i];
//			week--;
//			
//		}
//
//		
//	}
//	cout << "Сумма: " << sum << endl;
//	return 0;
//}