#include <iostream> 
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   /* 10000;*/
    int num;
    char buffer[33];
    cout << "Введите число: ";
    cin >> num;

    _itoa_s(num, buffer, 2);
    cout << "Это число в двоичном представлении: " << buffer << "\n";

    if ((num & 15) == 0) 
    {
        cout << "Число " << num << " кратно шестнадцати." << endl;
    }
    else {
        cout << "Число " << num << " не кратно шестнадцати." << endl;
    }

    return 0;
}