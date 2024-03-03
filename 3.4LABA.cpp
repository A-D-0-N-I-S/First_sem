//#include <iostream>
//#include <windows.h>
//#include <iomanip>
//#include <conio.h>
//#include <stdio.h>
////14 Вариант
//using namespace std;
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	char c;
//	char probel = ' ';
//
//	cout << "Введите символ дл зарисовки ромба ";
//	cin >> c;
//	cout << endl;
//
//	cout << setw(35) << setfill(probel) << probel;
//	cout << setw(1) << setfill(c) << c << endl;
//	cout << setw(34) << setfill(probel) << probel;
//	cout << setw(3) << setfill(c) << c << endl;
//	cout << setw(33) << setfill(probel) << probel;
//	cout << setw(5) << setfill(c) << c << endl;
//	cout << setw(32) << setfill(probel) << probel;
//	cout << setw(7) << setfill(c) << c << endl;
//	cout << setw(31) << setfill(probel) << probel;
//	cout << setw(9) << setfill(c) << c << endl;
//	cout << setw(30) << setfill(probel) << probel;
//	cout << setw(11) << setfill(c) << c << endl;
//	cout << setw(29) << setfill(probel) << probel;
//	cout << setw(13) << setfill(c) << c << endl;
//
//
//
//	cout << setw(30) << setfill(probel) << probel;
//	cout << setw(11) << setfill(c) << c << endl;
//	cout << setw(31) << setfill(probel) << probel;
//	cout << setw(9) << setfill(c) << c << endl;
//	cout << setw(32) << setfill(probel) << probel;
//	cout << setw(7) << setfill(c) << c << endl;
//	cout << setw(33) << setfill(probel) << probel;
//	cout << setw(5) << setfill(c) << c << endl;
//	cout << setw(34) << setfill(probel) << probel;
//	cout << setw(3) << setfill(c) << c << endl;
//	cout << setw(35) << setfill(probel) << probel;
//	cout << setw(1) << setfill(c) << c << endl;
//	
//	_getch();
//}
///*
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int i, j, N = 11;
//	int center = N / 2;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if (i <= center)
//			{
//				// Верхняя половина ромба
//				if (j >= center - i && j <= center + i)
//					cout << "*";
//				else
//					cout << " ";
//			}
//			else
//			{
//				// Нижняя половина ромба
//				if (j >= center + i - N + 1 && j <= center - i + N - 1)
//					cout << "*";
//				else
//					cout << " ";
//			}
//		}
//		cout << endl;
//	}
//	system("PAUSE");
//	return 0;
//}
//*/