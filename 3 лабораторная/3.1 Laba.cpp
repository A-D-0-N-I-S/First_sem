#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	#define _CRT_SECURE_NO_WARNINGS

	int number;
	int etaz;
	int podik;

	cout << "**************************************************************************\n";
	cout << "* Эта программа вычисляет номер подьезда и этажа дома по номеру квартиры *\n";
	cout << "**************************************************************************\n\n";

	while (true)
	{
		cout << "Введите номер квартиры\n";
		cin >> number;

		if (number > 0 && number <= 144)
		{
			break;
		}

		else
		{
			cout << "Проверьте введённые данные!\n\n";
		}
	}
	
	podik = (number - 1) / (9 * 4) + 1;
	etaz = ((number - (podik - 1) * 9 * 4) - 1) / 4 + 1;

	cout << "Квартира " << number << " находиться в " <<  podik << " подьезде" <<" на "<<  etaz << " этаже\n";

	_getch();
}
