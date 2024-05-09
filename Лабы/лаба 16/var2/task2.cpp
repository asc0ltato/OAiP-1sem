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

	// Двумерный массив
	int N, M;
	cout << "Введите размерность массива N x M: ";
	do {
		cout << "N = "; cin >> N;
		cin.clear();
		cin.ignore(32767, '\n');

	} while (N <= 0);
	do {
		cout << "M = "; cin >> M;
		cin.clear();
		cin.ignore(32767, '\n');
	} while (M <= 0);
	int** arr = new int* [N];
	for (int i = 0; i < N; i++) {
		arr[i] = new int[M];
	}
	// Заполнение массива
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << "Введите элемент массива [" << i << "][" << j << "]: ";
			cin >> arr[i][j];
		}
	}

	cout << "Введите строку, которая содержит русские и латинские буквы: ";
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
	/*Ввести вещественные числа в массив А[n, m](n, m > 0) и ко всем числам каждой строки  прибавить единицу.
	Если первый элемент строки нулевой, ничего не делать.*/

	// Вывод массива
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	// Прибавление единицы
	for (int i = 0; i < size1; i++) {
		if (arr[i][0] != 0) {
			for (int j = 0; j < size2; j++) {
				arr[i][j] += 1;
			}
		}
	}

	// Вывод массива
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void task2_text(string str)
{
	/*Дана строка.Все русские буквы привести к верхнему регистру, латинские - заменить символом « ? ».
	Вывести результат на экран.*/

	cout << "Строка до преобразования: " << str << endl;

	// Преобразование строки
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'а' && str[i] <= 'я') {
			str[i] -= 32;
		} else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = '?';
		}
	}

	cout << "Строка после преобразования: " << str << endl;

}