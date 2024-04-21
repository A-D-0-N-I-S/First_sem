#include <iostream>
#include <Windows.h>

using namespace std;
// 15 вариант
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a;
	double b;
	int n;
	

	cout << "Write a, b, n: \n";
	cin >> a >> b >> n;
	cout << "\n";
	double x, h, s = 0;

	h = (b - a) / (2 * n);
	x = a + 2*h;
	int s1 = 0;
	int s2 = 0;
	int i = 1;

	
	while (i < n)
	{
		s2 = s2 + ((sin(x) * sin(x) + 1));
		x = x + h;
		s1 = s1 + (sin(x) * sin(x) + 1);
		i = i + 1;
		x = x + h;
	}
		
	
	s = (h / 3) * ((sin(a) * sin(a) + 1) + 4 * (sin(a + h) * sin(a + h) + 1) + (4 * s1) + (2 * s2) + (sin(b) * sin(b) + 1));

	cout << "s: " << s << "\n";
	return 0;
}