	#include <iostream>
#include <Windows.h>

using namespace std;

int* sumOdd(int* arr, int size);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*Создать одномерный массив, содержащий 15 элементов, наполнить его случайными значениями в интервале от 1 до 200.
	Определить сумму всех нечетных элементов массива.*/

	// Динамический массив
	int size = 15;
	int* arr = new int[size];

	// Заполнение массива случайными числами
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 200 + 1;
	}

	// Вывод массива
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;

	// Вывод суммы нечетных элементов
	cout << "Сумма нечетных элементов массива: " << *sumOdd(arr, size) << endl;

	// Освобождение памяти
	delete[] arr;
}

// Сумма нечетных элементов
int* sumOdd(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 != 0) {
			sum += arr[i];
		}
	}
	return &sum;
}
