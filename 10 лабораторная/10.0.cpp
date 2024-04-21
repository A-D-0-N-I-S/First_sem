#include <iostream> 
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num;
    char buffer[33];
    cout << "Введите число: ";
    cin >> num;

    _itoa_s(num, buffer, 2);
    cout << "Это число в двоичном представлении: " << buffer << "\n";

    if ((num & 1) == 0) {
        cout << "Число " << num << " кратно двум." << endl;
    }
    else {
        cout << "Число " << num << " не кратно двум." << endl;
    }

    return 0;
}