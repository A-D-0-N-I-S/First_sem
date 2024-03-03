#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;
// 4.1 ВАРИАНТ
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char s;
	char probel = ' ';

	cout << "Введите символ для закраски круга ";
	cin >> s;
	
	cout << setw(47) << setfill(probel) << probel;
	cout << setw(9) << setfill(s) << s << endl;

	cout << setw(44) << setfill(probel) << probel;
	cout << setw(15) << setfill(s) << s << endl;
	cout << setw(42) << setfill(probel) << probel;
	cout << setw(19) << setfill(s) << s << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(23) << setfill(s) << s << endl;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(27) << setfill(s) << s << endl;

	cout << setw(36) << setfill(probel) << probel;
	cout << setw(31) << setfill(s) << s << endl;
	cout << setw(36) << setfill(probel) << probel;
	cout << setw(31) << setfill(s) << s << endl;

	cout << setw(38) << setfill(probel) << probel;
	cout << setw(27) << setfill(s) << s << endl;
	cout << setw(40) << setfill(probel) << probel;
	cout << setw(23) << setfill(s) << s << endl;
	cout << setw(42) << setfill(probel) << probel;
	cout << setw(19) << setfill(s) << s << endl;
	cout << setw(44) << setfill(probel) << probel;
	cout << setw(15) << setfill(s) << s << endl;
	cout << setw(47) << setfill(probel) << probel;
	cout << setw(9) << setfill(s) << s << endl;

}