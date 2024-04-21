#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int A, n, p; char num[33];

    cout << "Введите число: ";
    cin >> A;
    cout << endl;
    _itoa_s(A, num, 2);
    cout << "Число в 2 представлении = " << num << endl;
    cout << " " << endl;
    cout << "Введите позицию ";
    cin >> p;
    cout << endl;
    cout << "Сколько битов выкинуть? ";
    cin >> n;
    cout << endl;
  
   
    int mask = 1 << p;

    for (int i = 0; i < n; i++) {
        A &= (~mask);

        mask <<= 1;
    }
    _itoa_s(A, num, 2);
    cout << "Число: " << num << endl;
}