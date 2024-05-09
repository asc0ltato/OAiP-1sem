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
	for (int i = 0; i < N; i++)	{
		for (int j = 0; j < M; j++) {
			arr[i][j] = rand() % 25 - 10;
		}
	}

	cout << "Введите текст из нескольких слов (слова разделены пробелами) : ";
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
			// Вызов функции text
			task2_text(text);
			break;
		case 3:
			break;
		default:
			cout << "Неверный ввод" << endl;
			break;
		}
	} while (c != 3);
}

void task1_massiv(int** arr, int size1, int size2)
{

	/*Дан двумерный массив, состоящий из N строк и М столбцов.
	Найти количество отрицательных, положительных и нулевых элементов массива.*/

	// Вывод массива
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	int count_neg = 0;
	int count_pos = 0;
	int count_zero = 0;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr[i][j] < 0) {
				count_neg++;
			} else if (arr[i][j] > 0) {
				count_pos++;
			} else {
				count_zero++;
			}
		}
	}
	cout << "Количество отрицательных элементов: " << count_neg << endl;
	cout << "Количество положительных элементов: " << count_pos << endl;
	cout << "Количество нулевых элементов: " << count_zero << endl;
}

void task2_text(string str)
{
	/*Написать программу, которая вводит несколько слов текста и определяет общее количество слов.
	Слова разделены пробелами*/

	// Подсчет количества слов
	int count = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ' && str[i + 1] != ' ') {
			count++;
		}
	}
	cout << "Количество слов: " << count + 1 << endl;
}
