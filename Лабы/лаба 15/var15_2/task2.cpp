#include <iostream>
#include <Windows.h>

using namespace std;

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
			A[i][j] = rand() % 4 - 2;
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

	// Проверка наличия нулевых элементов в каждой строке матрицы
	int flag = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (A[i][j] == 0) {
				flag++;
				break;
			}
		}
	}
	if (flag == n) {
		cout << "Все строки матрицы содержат хотя бы один нулевой элемент" << endl;

		// Замена отрицательных элементов на нулевые
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (A[i][j] < 0) {
					A[i][j] = 0;
				}
			}
		}
		cout << "Матрица A(n,m) после замены отрицательных элементов на нулевые: " << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << A[i][j] << "\t";
			}
			cout << endl;
		}
	} else {
		cout << "Не все строки матрицы содержат хотя бы один нулевой элемент" << endl;
	}
	for (int i = 0; i < n; i++)
		delete[] A[i];
	delete[] A;
}
