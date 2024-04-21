#include <iostream>
#include <windows.h>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));

	int k;
	const int maxSize = 99;
	cout << "Введите размер массива: ";
	cin >> k;
	

	

	if (k > 99)
	{
		cout << "Ты в муте, клоун\n";
		cout << "Нажмите, чтобы принять\n\n";
		exit(0);
	}

	int arr1[maxSize]{};
	int arr2[maxSize]{};

	//ввод и вывод элементов массива
	for (int i = 0; i < k; i++)
	{
		arr1[i] = rand() % 198 - 99;
	}
	for (int i = 0; i < k; i++)
	{
		cout << arr1[i] << endl;
	}

	cout << "Полученный массив: \n";
	 //проверка кратности индексов массива
	
	
	cout << arr1[0]<<endl;

	/*if (arr1[0] < 0)
		{
			cout << a;
		}*/

	for (int i = 0; i < k; i++)
	{
		if (i % 3 == 0) 
		{
			
		}
		
		if(i % 3 != 0)
		{
			arr2[i] = arr1[i];
			cout << arr2[i] << endl;
			/*cout << arr1[i] << endl;*/
		}

		if (arr2[i] < 0)
		{
			cout << 10 << endl;
		}

	}
	/*for (int i = 0; i < k; i++)
	{
		cout << arr1[i] << endl;
	}*/

	/*for (i = k; i <= maxSize; i++)
	{
		arr1[t] = arr1[i + 1];
		int* p = (int*)&maxSize;
		*p--;
	}
	
	for (i = 0; i <= maxSize; i++)
	{
		cout << arr1[i] << endl;
	}
		*/


	
}

//#include <iostream>
//#include <string>
//using namespace std;
//
//int a, b, c, k, n;
//
//
//int main()
//{
//    int arr[5]{};
//    int arr2[5]{};
//    cin >> k;
//
//    for (int i = 0; i < 5; i++)
//    {
//        cin >> arr[i];
//    }
//
//    for (int i = 0; i < 5; i++)
//    {
//        if (arr[i] != k)
//        {
//            arr2[i] = arr[i];
//        }
//    }
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout << arr2[i]<<" ";
//    }
//
//    int a2_size = 0;
//    for (int i = 0; i < 5; i++)
//        if (arr[i] != k)
//        {
//            arr2[a2_size++] = arr[i];
//        }
//           
//
//    cout << endl;
//
//        for (int i = 0; i < a2_size; i++)
//        {
//            cout << arr2[i] << endl;
//        }
//}
