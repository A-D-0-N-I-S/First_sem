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

	cout << "Wrong a, b, n: \n";
	cin >> a >> b >> n;
	cout << "\n";
	double x, h, s=0;
	
	h = (b - a) / n;
	x = a;

	for (; x <= (b - h); x = x + h)
	{
		
			s = s +  (sin(x) * sin(x) + 1 + sin(x + h) * sin(x + h) + 1) *h/ 2;

	
		
	}
	cout << "s: " << s << "\n";
	return 0;
}