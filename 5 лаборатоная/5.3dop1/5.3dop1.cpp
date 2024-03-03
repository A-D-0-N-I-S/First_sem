#include <iostream>

#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Фирма ежегодно на протяжении n лет закупала оборудование стоимостью соответственно s1, s2, ..., sn pублей в год\n";  
	cout << "(эти числа вводятся и обрабатываются последовательно).Ежегодно в результате износа и морального старения(амортизации)\n";
	cout << "все имеющееся оборудование уценивается на р%. Какова общая стоимость накопленного оборудования за n лет ? \n\n";
	cout << "*****************************************************************************************************************\n\n";

	int n;
	double summa=0, prozent = 0, proz = 0;
	double p, p_01, p_p;
	
	
	cout << "Введите кол-во лет ";
	cin >> n;
	cout << endl;

	int* s = new int[n]{};
	
	for (int i = 0; i < n; i++)
	{
		cout << "Введите s" << i+1<<": ";
		cin >> s[i];
		summa = summa + s[i];
	}
	cout << endl;
	cout << "Исходная сумма = "<<summa<<" рублей\n\n";

	cout << "Введите уценку (p%): ";
	cin >> p;

	p_01 = p / 100;
	for (int i = 0; i < n; i++)
	{
		//cout << "Значение массива = "<<s[i]<<endl;
		
		prozent = s[i] * p_01;
		p = proz + prozent;
		p_p = p + prozent;
	}
	cout << p_p;
	
	cout << endl << endl;
	cout << "Сумма накопленного оборудования состовляет " <<summa -  p_p<<" рублей\n\n";

	delete [] s;
	return 0;
}