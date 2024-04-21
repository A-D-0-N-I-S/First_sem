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

    if ((num & 3) == 0) {
        cout << "Число " << num << " кратно четырем." << endl;
    }
    else {
        cout << "Число " << num << " не кратно четырем." << endl;
    }

    return 0;
}