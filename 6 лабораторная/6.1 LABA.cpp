#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    unsigned q, b, t, sum, i = 1; // объявляем натуральные числа

    cout << "Введите число q: ";
    cin >> q;

    cout << "Введите число b: ";
    cin >> b;
    cout << "\n";

    for (i; i < q; i++) 
    {
        t = i;
        sum = 0;
        while (t != 0) 
        {
            sum += t % 10;      // к sum прибавляем остаток т.е. по сути цифры числа q
            t /= 10;            // "уменьшаем" число на 1 разряд
        }
        if (sum * sum == b)
        {
         cout <<"Число: "<< i << " \n";
        }
    }
    return 0;
}