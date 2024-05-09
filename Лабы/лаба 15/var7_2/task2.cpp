#include <iostream>
#include <Windows.h>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*Найти в матрице первую строку, все элементы которой отрицательны.
	Увеличить все элементы матрицы на значение первого элемента найденной строки.*/

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
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			A[i][j] = rand() % 7 - 5;
		}
	}

	// Вывод матрицы на экран
	cout << "Матрица A(n,m): " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	// Поиск первой строки, все элементы которой отрицательны
	int i = 0;
	int firstElement = 0;
	while (i < n)
	{
		int j = 0;
		while (j < m)
		{
			if (A[i][j] >= 0)
				break;
			j++;
		}
		if (j == m)
		{
			cout << "Первая строка, все элементы которой отрицательны: " << i + 1 << endl;
			cout << "Её первый элемент: " << A[i][0] << endl;
			firstElement = A[i][0];
			// Увеличение всех элементов матрицы на значение первого элемента найденной строки
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					A[i][j] += firstElement;
				}
			}

			// Вывод матрицы на экран
			cout << "Матрица A(n,m) после увеличения всех элементов на значение первого элемента найденной строки: " << endl;
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					cout << A[i][j] << "\t";
				}
				cout << endl;
			}
			break;
		}
		i++;
	}
	if (i == n)
	{
		cout << "В матрице нет строк, все элементы которых отрицательны." << endl;
	}

	// Освобождение памяти
	for (int i = 0; i < n; i++)
		delete[] A[i];
	delete[] A;

}
