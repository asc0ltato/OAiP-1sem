#include <iostream>
#include <Windows.h>

using namespace std;

int& task_func(int** arr, int n, int m);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*Проверить, все ли строки матрицы содержат хотя бы один нулевой элемент.
	Если нет, то заменить значения всех отрицательных элементов матрицы на нулевые.*/

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
			A[i][j] = rand() % 5 - 2;
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

	// Вывод матрицы
	cout << "Матрица A(n,m) после выполнения функции: " << endl;
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

int& task_func(int** arr, int n, int m) {
	int i, j;
	// Проверка всех строк на наличие нулевых элементов
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (arr[i][j] == 0)
				break;
		}
		if (j == m)
			break;
	}
	// Если все строки содержат нулевые элементы
	if (i == n) {
		cout << "Все строчки содержат 0-элемент" << endl;
		// Замена всех отрицательных элементов на нули
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++)	{
				if (arr[i][j] < 0)
					arr[i][j] = 0;
			}
		}
	} else {
		cout << "Не все строчки содержат 0-элемент" << endl;
		exit(-1);
	}
	return arr[i][j];
}