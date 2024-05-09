#include <iostream>
#include <Windows.h>

using namespace std;

int* pfmin(int* arr, int size);
int* pfmax(int* arr, int size);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Найти сумму минимального и максимального элементов одномерного массива.

	// Динамический массив с вводом размера
	int size;
	cout << "Введите размер массива: ";
	cin >> size;
	int* arr = new int[size];

	// Заполнение массива случайными числами
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 40;
	}

	// Вывод массива
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;

	// Вывод минимального и максимального элемента
	/*cout << "Минимальный элемент: " << *pfmin(arr, size) << endl;
	cout << "Максимальный элемент: " << *pfmax(arr, size) << endl;*/

	// Вычисление разности
	int sum = *pfmax(arr, size) + *pfmin(arr, size);
	cout << "Сумма минимального и максимального элемента: " << sum << endl;

	// Освобождение памяти
	delete[] arr;
}

// Поиск минимального
int* pfmin(int* arr, int size) {
	int* min = arr;
	for (int i = 0; i < size; i++) {
		if (*min > arr[i]) {
			min = &arr[i];
		}
	}
	return min;
}

// Поиск максимального
int* pfmax(int* arr, int size) {
	int* max = arr;
	for (int i = 0; i < size; i++) {
		if (*max < arr[i]) {
			max = &arr[i];
		}
	}
	return max;
}