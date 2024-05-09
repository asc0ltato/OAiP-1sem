#include <iostream>
#include <Windows.h>

using namespace std;

int* sumEven(int* arr, int size);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//В одномерном массиве, содержащем 15 элементов, посчитать и вывести сумму всех четных элементов массива.

	// Динамический массив
	int size = 15;
	int* arr = new int[size];

	// Заполнение массива случайными числами
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50;
	}

	// Вывод массива
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;

	// Вывод суммы четных элементов
	cout << "Сумма четных элементов массива: " << *sumEven(arr, size) << endl;

	// Освобождение памяти
	delete[] arr;
}

// Сумма четных элементов
int* sumEven(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			sum += arr[i];
		}
	}
	return &sum;
}