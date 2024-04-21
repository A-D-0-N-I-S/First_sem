#include <iostream>
#include <windows.h>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Задан массив из k чисел. Сдвинуть элементы массива циклически на n позиций влево.\n\n\n";

	int k, n;
	const int maxSize = 99;
	srand(time(NULL));

	double arr[maxSize]{};

	cout << "Введите k: ";
	cin >> k;
	
	for (int i = 0; i < k; i++)
	{
		arr[i]= rand() % 100;
		
	}
	cout << "Введите n: ";
	cin >> n;
	cout << "Полученный массив: \n";

	for (int i = 0; i < k; i++)
	{
		SetConsoleTextAttribute(h, 2);
		cout << arr[i];
		SetConsoleTextAttribute(h, 3);
		cout << setw(10);
		cout << arr[i + n] << endl;
		SetConsoleTextAttribute(h, 0);
	}
	return 0;
}