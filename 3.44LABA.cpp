#include <iostream>
#include <windows.h>

using namespace std;
//14 Вариант
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int A, B, C,A1, B1,C1, sum;

	cout << "\t\t\t\t\tЭта программа считaет кол-во очков:\n\t\t\t\t\tСпутник = 200 очков;\n\t\t\t\t\tРакета = 100 очков;\n\t\t\t\t\tСамолёт = 50 очков;\n\n\n";

	cout << "Введите кол-во сбитых спутников: ";
	cin >> C;

	cout << "Введите кол-во сбитых ракет: ";
	cin >> B;

	cout << "Введите кол-во сбитых самолётов: ";
	cin >> A;
	cout << endl;

	A1 = A * 200;
	B1 = B * 100;
	C1 = C * 50;

	sum = A1 + B1 + C1;

	cout << "Вы заработли " << sum << " очков\n";

}