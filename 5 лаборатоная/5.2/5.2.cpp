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
	t = 3;
	
	double j []{0.2, - 1.6, 9.4, 5.7, 6.2};
	

	while (t <= 4)
	{
		for (int i = 0; i < sizeof(j) / sizeof(j[0]); i++)
		{

			cout << "ЭТО " << i << " ИТЕРАЦИЯ\n";


			z = sqrt(t * a + y) + 4 * exp(-2 * j[i]);
			w = log(0.4 * y) / (7 * a - z);

			 // инкремент для счётчика итерации


			cout << "t = " << t << endl;
			cout << "z = " << z << endl;
			cout << "w = " << w << endl << endl;

			

			
		}
		t = t + 0.2; // значение t в цикле while
	}
	
		
	
	



}