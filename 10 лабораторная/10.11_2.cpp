#include <iostream> 
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int numA,numB, n, p;
	char bufferA[33];
	char bufferB[33];

	cout << "Введите число A: ";
	cin >> numA;
	_itoa_s(numA, bufferA, 2);
	cout << "Это число в двоичном представлении: " << bufferA << "\n";

	cout << "Введите число B: ";
	cin >> numB;
	_itoa_s(numB, bufferB, 2);
	cout << "Это число в двоичном представлении: " << bufferB << "\n";

	cout << "Введите количество битов: ";
	cin >> n;

	cout << "Введите позицию: ";
	cin >> p;

	int mask = (1 << n) - 1;

	numA = numA | (mask << p);

	cout << "Измененное число: " << numA << endl;

	return 0;
}