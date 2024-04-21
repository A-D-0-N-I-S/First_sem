#include <iostream> 
#include <windows.h>

using namespace std;

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num, n, p;
	char buffer[33];

	cout << "Введите число: ";
	cin >> num;
	_itoa_s(num, buffer, 2);
	cout << "Это число в двоичном представлении: "<<buffer<<"\n";

	cout << "Введите количество битов: ";
	cin >> n;

	cout << "Введите позицию: ";
	cin >> p;

	int mask = (1 << n) - 1;

	num = num | (mask << p);

	cout << "Измененное число: " << num << endl;

	return 0;
}