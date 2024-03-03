#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double w, z, a, t, y, j;

	a = 1;
	y = 0.4;
	t = 5e-4;
	j = 1;
	t = 1; // счётчик

	while (j >= 1 && j <= 2)
	{
		cout << "ЭТО " << t << " ИТЕРАЦИЯ\n";
		t++;

		z = sqrt(t * a + y) + 4 * exp(-2 * j);
		w = log(0.4 * y) / (7 * a - z);

		cout << "j = " << j << endl;
		cout << "z = " << z << endl;
		cout << "w = " << w << endl << endl;

		j = j + 0.2;
		j = round(j * 10)/10;
	}



}