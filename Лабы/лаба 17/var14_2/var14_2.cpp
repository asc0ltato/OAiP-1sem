#include <iostream>
#include <Windows.h>

using namespace std;

int& task_func(int** arr, int n, int m);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*Если в матрице имеется столбец, все элементы которого положительны, то знаки элементов предыдущего столбца
	изменить на противоположные.*/

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
			A[i][j] = rand() % 10 - 4;
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
	int& k = task_func(A, n, m);

	// Вывод результата на экран
	cout << "Номер первого столбца, все элементы которого положительны: " << k << endl;
	cout << "Матрица A(n,m) после изменения знаков элементов предыдущего столбца: " << endl;
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

// Функция поиска первого столбца, все элементы которого положительны и замена знаков элементов предыдущего столбца
int& task_func(int** arr, int n, int m) {
	int i, j;
	// Проходим не по строкам, а по столбцам !!!
	for (j = 0; j < m; j++) {
		for (i = 0; i < n; i++) {
			if (arr[i][j] < 0)
				break;
		}
		if (i == n)
			break;
	}
	if (j == m) { // Если дошли до конца и столбца нет
		cout << "В матрице нет столбца, все элементы которого положительны" << endl;
		exit(1); // Работает только так
	} else {
		// Замена знаков элементов предыдущего столбца
		for (i = 0; i < n; i++) {
			arr[i][j - 1] = -arr[i][j - 1];
		}
		return j;
	}
}
