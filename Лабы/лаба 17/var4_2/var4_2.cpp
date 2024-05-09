#include <iostream>
#include <Windows.h>

using namespace std;

int& task_func(int** arr, int n, int m);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*Проверить, есть ли в матрице хотя бы одна строка, содержащая положительный элемент и найти ее номер.
	Знаки элементов предыдущей строки изменить на противоположные.*/

	// Динамическая матрица A(n,m)
	int n, m;
	cout << "Введите размерность матрицы A(n,m): " << endl;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;

	// Выделение памяти под матрицу
	int** A = new int* [n];
	for (int i = 0; i < n; i++)
		A[i] = new int[m];

	// Заполнение матрицы случайными числами
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			A[i][j] = rand() % 20 - 17;
		}
	}

	// Вывод матрицы на экран
	cout << "Матрица A(n,m): " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	// Вызов функции
	int& res = task_func(A, n, m);

	// Вывод результата на экран
	cout << "Матрица A(n,m) после изменения знаков элементов предыдущей строки: " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	// Освобождение памяти
	for (int i = 0; i < n; i++)
		delete[] A[i];
	delete[] A;
}

int& task_func(int** arr, int n, int m)
{
	// Нахождение строки, где есть хотя бы один положительный элемент, если она есть, то выводиться сообщение о ее наличии
	// и изменение знаков элементов предыдущей строки на противоположные
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (arr[i][j] > 0) {
				cout << "Строка с положительным элементом: " << i << endl; // Вывод от 0, можно сделать +1
				break;
			}
		}
		if (j != m)
			break;
	}
	if (i == n) {
		cout << "Строки с положительным элементом нет" << endl;
		exit(-1);
	} else {
		if (i != 0) {
			for (j = 0; j < m; j++) {
				arr[i - 1][j] = -arr[i - 1][j];
			}
		}
	}
	return arr[i][j];
}
