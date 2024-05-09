#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void task1_massiv(int** arr, int size1, int size2);
void task2_text(string str);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Динамический двумерный массив N x M
	int N, M;
	cout << "Введите размерность массива N x M: ";
	cout << "N = "; cin >> N;
	cout << "M = "; cin >> M;
	int** arr = new int* [N];
	for (int i = 0; i < N; i++) {
		arr[i] = new int[M];
	}
	// Заполнение массива случайными числами
	srand(time(NULL));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			arr[i][j] = rand() % 10;
		}
	}

	cout << "Введите текст, где после каждой буквы c нужно добавить символ * : ";
	string text;
	while (text == "") {
		getline(cin, text);
	}

	system("cls");

	int c;
	do {
		cout << "Введите" << endl;
		cout << "1 - двумерный массив" << endl;
		cout << "2 - проверка текста на наличие буквы c" << endl;
		cout << "3 - выход" << endl;
		cin >> c;
		cin.clear();
		cin.ignore(32767, '\n');
		switch (c) {
		case 1:
			// Вызов функции massiv
			task1_massiv(arr, N, M);
			break;
		case 2:
			task2_text(text);
			break;
		case 3:
			break;
		}
	} while (c != 3);
}

void task1_massiv(int** arr, int size1, int size2)
{
	/*Дан массив размерностью N x M.
	Найти максимальный элемент и его позицию.
	Если максимальных элементов несколько, то вывести их все. Найти сумму элементов ниже главной диагонали.*/

	// Вывод массива
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	// Найти максимальный элемент и его позицию. Если максимальных элементов несколько, то вывести их все. 
	int max = arr[0][0];
	int max_i = 0;
	int max_j = 0;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}
	// Если максимальных элементов несколько, то вывести их все
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr[i][j] == max) {
				cout << "Максимальный элемент: " << arr[i][j] << " на позиции: " << "Строка " << i << " Столбец " << j << endl;
			}
		}
	}
	cout << endl;

	// Найти сумму элементов ниже главной диагонали.
	int sum = 0;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (i > j) {
				sum += arr[i][j];
			}
		}
	}
	cout << "Сумма элементов ниже главной диагонали = " << sum << endl;
}

void task2_text(string text)
{
	// После каждой буквы c добавить символ *
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == 'c') {
			text.insert(i + 1, "*");
		}
	}
	cout << "Текст после добавления символа * после каждой буквы c: " << text << endl;
}