#include <iostream>
#include <windows.h>
#include <iomanip>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char a, c, probel; probel = ' ';
	cout << "Введите символ для крыши ";
	cin >> c;
	cout << "Введите символ для материала домика ";
	cin >> a;
	cout << endl;


	cout << setw(35) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(29) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
	cout << setw(26) << setfill(probel) << probel;
	cout << setw(19) << setfill(c) << c << endl;
	cout << setw(23) << setfill(probel) << probel;
	cout << setw(25) << setfill(c) << c << endl;
	cout << setw(21) << setfill(probel) << probel;
	cout << setw(29) << setfill(c) << c << endl;


	cout << setw(24) << setfill(probel) << probel;
	cout << setw(23) << setfill(a) << a << endl;
	cout << setw(24) << setfill(probel) << probel;
	cout << setw(23) << setfill(a) << a << endl;
	cout << setw(24) << setfill(probel) << probel;
	cout << setw(23) << setfill(a) << a << endl;
	cout << setw(24) << setfill(probel) << probel;
	cout << setw(23) << setfill(a) << a << endl;
	cout << setw(24) << setfill(probel) << probel;
	cout << setw(23) << setfill(a) << a << endl;
	cout << setw(24) << setfill(probel) << probel;
	cout << setw(23) << setfill(a) << a << endl;
	cout << setw(24) << setfill(probel) << probel;
	cout << setw(23) << setfill(a) << a << endl;
	cout << setw(24) << setfill(probel) << probel;
	cout << setw(23) << setfill(a) << a << endl;
	
}
