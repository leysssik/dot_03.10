#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//задание1
	int list1[] = { 1,6,9,12,52,100,38,21,-6,-1,34,-21 };
	int sum = 0;
	int length = sizeof(list1) / sizeof(list1[0]);
	for (int i = 0; i < length;  i++)
	{
		sum += list1[i];
	}
	cout << "Сумма значений элементов массива = " << sum << endl;

	//задание2
	int average = sum / length;
	cout << "Срееднее значение массива = " << average << "\n";

	//задание3

	for (int t = 0; t < length; t++)
	{
		if (list1[t] > 0)
		{
			cout << "Положительные элементы:  " << list1[t]<<endl;
		}
		if (list1[t] <0)
		{
			cout << "Отрицательные элементы:  " << list1[t]<<endl ;
		}
	}

	

	//задание4
	for (int t = 0; t < length; t++)
	{
		if (list1[t] % 2 == 0)
		{
			cout << "Чётные элементы: " << list1[t] << endl;

		}
		else
		{
			cout << "Нечётные элементы: " << list1[t] << endl;
		}
	}

	}

