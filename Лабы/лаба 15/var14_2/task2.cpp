#include <iostream>
#include <Windows.h>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*Проверить, есть ли в матрице хотя бы одна строка, содержащая элемент, равный нулю, и найти ее номер.
	Уменьшить все элементы матрицы на значение первого элемента найденной строки.*/

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
			A[i][j] = rand() % 10;
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

	// Нахождение первой строки с нулевым элементом
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (A[i][j] == 0) {
				k = i;
				break;
			}
		}
		if (k != 0) {
			break;
		}
	}


	// Вывод результата
	if (k == 0) {
		cout << "В матрице нет строк с нулевыми элементами." << endl;
	} else {
		cout << "В матрице есть строка с нулевыми элементами." << endl;
		cout << "Номер строки: " << k << endl;
		cout << "Матрица после уменьшения всех элементов на значение первого элемента найденной строки: " << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				A[i][j] -= A[k][0];
				cout << A[i][j] << "\t";
			}
			cout << endl;
		}
	}

	// Освобождение памяти
	for (int i = 0; i < n; i++) {
		delete[] A[i];
	}
	delete[] A;
}