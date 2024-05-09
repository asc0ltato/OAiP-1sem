#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

void main()
{
	// Разделить массив на две части, поместив в первую элементы, большие среднего арифметического их суммы, а во вторую - меньшие.
	setlocale(LC_ALL, "Russian");
	int N, sum = 0;
	double average = 0;
	cout << "Введите размерность массива: ";
	cin >> N;
	int* arr = new int[N];
	srand(time(NULL));
	cout << "Исходный массив: ";

	for (int i = 0; i < N; i++) {
		*(arr + i) = rand() % 100;
		cout << *(arr + i) << " ";
		sum += *(arr + i); // сумма элементов массива
	}

	average = sum / N; // среднее арифметическое элементов массива
	cout << "\nСумма элементов массива: " << sum << "\nКол-во элементов : " << N << "\nСреднее арифметическое: " << average << "\n\n\n";

	int* arr1 = new int[N];
	int* arr2 = new int[N];
	int j = 0, k = 0;

	for (int i = 0; i < N; i++) {
		if (*(arr + i) >= average) {
			*(arr1 + j) = *(arr + i);
			j++;
		} else {
			*(arr2 + k) = *(arr + i);
			k++;
		}
	}

	cout << "Массив после преобразований: ";

	for (int i = 0; i < j; i++) {
		cout << *(arr1 + i) << " ";
	}

	cout << "|"; // типо разделитель, для наглядности

	for (int i = 0; i < k; i++) {
		cout << *(arr2 + i) << " ";
	}
}
