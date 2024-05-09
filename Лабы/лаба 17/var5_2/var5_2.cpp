#include <iostream>
#include <Windows.h>

using namespace std;

int& task_func(int** arr1, int** arr2, int n, int m, int** arr3);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*Даны две целочисленные матрицы размером n x m и m x n.
	Если в матрице отсутствуют нулевые элементы, то определить произведение этих матриц.*/

	// Динамическая матрица A(n,m)
	int n, m;
	cout << "Введите размерность матрицы A(n,m): " << endl;
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;

	// Выделение памяти под матрицу
	int** A = new int* [n];
	for (int i = 0; i < n; i++) {
		A[i] = new int[m];
	}

	int** B = new int* [m];
	for (int i = 0; i < m; i++) {
		B[i] = new int[n];
	}

	// Заполнение матриц случайными числами
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			A[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			B[i][j] = rand() % 20;
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
	cout << endl;

	cout << "Матрица B(m,n): " << endl;
	for (int i = 0; i < m; i++)	{
		for (int j = 0; j < n; j++) {
			cout << B[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	// Создаем дополнительную матрицу C(n,n)
	int** C = new int* [n];
	for (int i = 0; i < n; i++) {
		C[i] = new int[n];
	}

	// Заполняем матрицу C нулями
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			C[i][j] = 0;
		}
	}

	// Вызов функции
	int& res = task_func(A, B, n, m, C);

	// Вывод матрицы на экран
	cout << "Матрица C(n,n): " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << C[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	// Очистка памяти
	for (int i = 0; i < n; i++) {
		delete[] A[i];
	}
	delete[] A;

	for (int i = 0; i < m; i++) {
		delete[] B[i];
	}
	delete[] B;

	for (int i = 0; i < n; i++) {
		delete[] C[i];
	}
	delete[] C;

}

int& task_func(int** arr1, int** arr2, int n, int m, int** arr3) {
	int i, j;
	// Проверка на наличие нулей в матрицах
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (arr1[i][j] == 0) {
				cout << "В матрице A(n,m) есть нули!" << endl;
				exit(-1);
			}
		}
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (arr2[i][j] == 0) {
				cout << "В матрице B(m,n) есть нули!" << endl;
				exit(-1);
			}
		}
	}

	// Если нулей нет, то производим умножение матриц и записываем результат в матрицу C(n,n)
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	return arr3[i][j];
}


