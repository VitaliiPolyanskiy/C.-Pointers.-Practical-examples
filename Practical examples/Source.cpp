#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	// Используя указатели и оператор разыменования, определить наибольшее из двух чисел.
	int a, b;
	int *ptr, *ptr2;
	ptr = &a;
	ptr2 = &b;
	cout << "Enter the first number: ";
	cin >> *ptr;
	cout << "Enter the second number: ";
	cin >> *ptr2;
	if (*ptr > *ptr2)
		cout << *ptr << ">" << *ptr2;
	else if (*ptr < *ptr2)
		cout << *ptr << "<" << *ptr2;
	else
		cout << *ptr << "==" << *ptr2;
	cout << endl;

	// Пользуясь указателем на массив целых чисел, посчитать сумму элементов массива.
	// Использовать в программе арифметику указателей для продвижения по массиву, 
	// а также оператор разыменования.
	srand(time(0));
	const int SIZE = 10;
	int arr[SIZE];
	int sum = 0;
	ptr = arr; // ptr = &arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		*ptr = rand() % 30;
		++ptr;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;

	//for(int i = 0; i < SIZE; i++)
	//{
	//	// Выход за пределы массива
	//	cout << *ptr << '\t';
	//	++ptr;
	//}

	//for(int i = 0; i < SIZE; i++)
	//{
	//	
	//	cout << *arr << '\t';
	//	++arr; // нельзя изменять константу
	//}

	ptr = arr;
	for (int i = 0; i < SIZE; i++)
	{
		cout << *ptr << '\t';
		sum += *ptr;
		++ptr;
	}
	cout << "\nSum of elements: " << sum << endl;

	// Пользуясь указателем на массив целых чисел, изменить порядок следования элементов  массива на противоположный. 
	// Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
	sum = 0;
	ptr = arr; // ptr = &arr[0];
	ptr2 = &arr[SIZE - 1];
	for (int i = 0; i < SIZE; i++)
	{
		i[arr] = rand() % 30; // *(arr + i)    or     *(i + arr)
		cout << *(i + arr) << '\t';
	}
	for (int i = 0; i < SIZE / 2; i++)
	{
		int temp = *ptr;
		*ptr = *ptr2;
		*ptr2 = temp;
		++ptr;
		--ptr2;
	}
	cout << endl;
	ptr = arr;
	for (int i = 0; i < SIZE; i++)
	{
		cout << *(ptr + i) << '\t'; // ptr[i]
	}
	cout << endl;

	return 0;
}
