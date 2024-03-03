#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char c = ' ';
	cout << "\t\t\t\t\t\b\bФорматированный способ\n\n\n";


	printf("\t\t\t\t\t\t1\n", c);
	printf("\t\t\t\t\t\t\b111\n", c);
	printf("\t\t\t\t\t\t\b\b11111\n", c);
	printf("\t\t\t\t\t\t\b\b\b1111111\n", c);
	
	printf("\t\t\t\t\t\t\b\b\b\b\b\b\b\b\b1111111111111111111\n", c);
	printf("\t\t\t\t\t\t\b\b\b\b\b\b\b111111111111111\n", c);
	printf("\t\t\t\t\t\t\b\b\b\b\b11111111111\n", c);
	printf("\t\t\t\t\t\t\b\b\b\b\b\b\b111111\t\t\b\b\b\b\b\b111111\n", c);
	printf("\t\t\t\t\t\t\b\b\b\b\b\b\b\b11\t\t\b11\n", c);
}