#include <iostream>
#include <Windows.h>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*Найти в матрице первую строку, все элементы которой положительны, и сумму этих элементов.
	Уменьшить все элементы матрицы на эту сумму.*/

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
			A[i][j] = rand() % 25 - 5;
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

	// Поиск первой строки, все элементы которой положительны
	int sum = 0;
	int i = 0;
	while (i < n)
	{
		int j = 0;
		while (j < m)
		{
			if (A[i][j] < 0)
				break;
			j++;
		}
		if (j == m)
		{
			for (int k = 0; k < m; k++)
			{
				sum += A[i][k];
			}
			cout << "Номер строки, все элементы которой положительны: " << i + 1 << endl;
			cout << "Сумма элементов первой строки, все элементы которой положительны: " << sum << endl;
			break;
		}
		i++;
	}



	// Уменьшение всех элементов матрицы на сумму
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			A[i][j] -= sum;
		}
	}

	// Вывод матрицы на экран
	cout << "Матрица A(n,m) после уменьшения всех элементов на сумму: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}






	// Освобождение памяти
	for (int i = 0; i < n; i++)
		delete[] A[i];
	delete[] A;
}
