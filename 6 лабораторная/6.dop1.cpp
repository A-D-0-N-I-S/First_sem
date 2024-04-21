#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	//unsigned int num, i = 1;

	int n;
	cout << "Введите n: ";
	cin >> n;// ввести n c клавиатуры

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			cout << "n  не простое, так как делится на i\n";// вывести, что n  не простое, так как делится на i
			
			return 0;
		}
	}
	cout << "n простое\n";//вывести что n простое. 
	for (int i = 0; i < 3; i++)
	{
		cout << n % 10;
		 n /= 10;
		
	}
	{

	}
	return 0;



}