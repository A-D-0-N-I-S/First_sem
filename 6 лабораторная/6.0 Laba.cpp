#include <iostream>
#include <windows.h>
#include <tgmath.h>
#include <iomanip>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double b, z, s, x, j;

	j = 4;
	
	x = round(-4e-3 *1000)/1000;
	s = 1.1;
	cout << setw(5) << "Значение B" << setw(15) << "Значаение Z" << setw(25) << "Значаение J\n";
	cout << "****************************************************\n";
	while (j <= 7)
	{
		
		b = (12 * s) - (exp(-s / 2) * (x - j));
		cout<<setw(5)<< b;

		if (b < 1.5)
		{
			
			z = sqrt(-2 * x * j) + b;
			cout  <<setw(15)<< z ;
			
		}
		if (b > 1.5)
		{
			
			z = abs(13 * x * j) + b;
			cout << setw(15) << z;
			
		}
		
		j += 0.5;
		cout << setw(20)<< j << "\n\n";
	}
}