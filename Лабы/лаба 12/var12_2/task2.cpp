#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	// В массиве А найти номера всех элементов, которые равны, больше и меньше числа С.
	setlocale(LC_ALL, "Russian");
	int size;
	cout << "Размер массива A: ";
	cin >> size;
	int* Arr = new int[size];

	for (int i = 0; i < size; i++) {
		*(Arr + i) = rand() % 99;
	}
	// Вывод массива
	cout << "\nВаш массив A: ";

	for (int i = 0; i < size; ++i) {
		cout << *(Arr + i) << " ";
	}

	int c;
	cout << "\nВведите число С: ";
	cin >> c;

	cout << "\nНомера элементов массива А, которые равны С: ";
	for (int i = 0; i < size; ++i) {
		if (*(Arr + i) == c)
		{
			cout << i << " ";
		}
	}

	cout << "\nНомера элементов массива А, которые больше С: ";
	for (int i = 0; i < size; ++i) {
		if (*(Arr + i) > c)
		{
			cout << i << " ";
		}
	}

	cout << "\nНомера элементов массива А, которые меньше С: ";
	for (int i = 0; i < size; ++i) {
		if (*(Arr + i) < c)
		{
			cout << i << " ";
		}
	}
}
