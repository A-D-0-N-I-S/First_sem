#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double w, z, a, t, y;

	a = 1;
	y = 0.4;
	t = 5e-4;
	
	double j []{ 5,3,1,7,3 };

	for (int i = 0; i < sizeof(j)/sizeof(j[0]); i++)
	{
		cout << "ЭТО " << i + 1 << " ИТЕРАЦИЯ\n";

		z = sqrt(t * a + y) + 4 * exp(-2 * j[i]);
		w = log(0.4 * y) / (7 * a - z);

		cout << "z = " << z << endl;
		cout << "w = " << w << endl<<endl;
	}
	




}