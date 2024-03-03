#include <iostream>
#include <windows.h>

using namespace std;
//Шахматная доска
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int m;

	cout << "\t\t\t\tШАХМАТНАЯ ДОСКА\n\n";

	cout << "Введите значение клетки. Ввести латинскую букву:\n\n 1 - a,\n 2 - b,\n 3 - c,\n 4 - d,\n 5 - e,\n 6 - f,\n 7 - g,\n 8 - h  \n";
	cin >> m;
	switch (m) // Оператор выбора
	{
	case 1: cout << "Слон угрожает фигурам на клетках: b2,c3,d4,e5,f6,g7,h8\n"; break;
	case 2: cout << "Слон угрожает фигурам на клетках: a2,c2,d3,e4,f5,g6,h7\n"; break;
	case 3: cout << "Слон угрожает фигурам на клетках: a3,b2,d2,e3,f4,g5,h6\n"; break;
	case 4: cout << "Слон угрожает фигурам на клетках: a4,b3,c2,e2,f3,g4,h5\n"; break;
	case 5: cout << "Слон угрожает фигурам на клетках: a5,b4,c3,d2,f2,g3,h4\n"; break;
	case 6: cout << "Слон угрожает фигурам на клетках: a6,b5,c4,d3,e2,g2,h3\n"; break;
	case 7: cout << "Слон угрожает фигурам на клетках: a7,b6,c5,d4,e3,f2,h2\n"; break;
	case 8: cout << "Слон угрожает фигурам на клетках: a8,b7,c6,d5,e4,f3,g2\n"; break;

		default:
		cout << "Вы ввели некорректные данные!\n";
		break;
	}

	cout << endl;

	int const ROWS = 8; // Строка
	int const COLS = 8; // Колонка

	string arr[ROWS][COLS] // Обьявляем двумерный массив

	{
		{" a1 ", " b1 ", " c1 ", " d1 ", " e1 ", " f1 ", " g1 ", " h1 \n"},
		{" a2 ", " b2 ", " c2 ", " d2 ", " e2 ", " f2 ", " g2 ", " h2 \n"},
		{" a3 ", " b3 ", " c3 ", " d3 ", " e3 ", " f3 ", " g3 ", " h3 \n"},
		{" a4 ", " b4 ", " c4 ", " d4 ", " e4 ", " f4 ", " g4 ", " h4 \n"},
		{" a5 ", " b5 ", " c5 ", " d5 ", " e5 ", " f5 ", " g5 ", " h5 \n"},
		{" a6 ", " b6 ", " c6 ", " d6 ", " e6 ", " f6 ", " g6 ", " h6 \n"},
		{" a7 ", " b7 ", " c7 ", " d7 ", " e7 ", " f7 ", " g7 ", " h7 \n"},
		{" a8 ", " b8 ", " c8 ", " d8 ", " e8 ", " f8 ", " g8 ", " h8 \n"},
	};


	for (int i = 0; i < ROWS; i++) // Выводим все значения двумерного массива
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}
}