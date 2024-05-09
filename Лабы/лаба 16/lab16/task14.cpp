#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void task1_massiv(int* arr, int);
void task2_bstu(string str);

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Динамический массив
	int size;
	cout << "Введите размерность массива: ";
	cin >> size;
	int* arr = new int[size];
	// Заполнение массива случайными числами
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 25 - 15;
	}

	cout << "Введите текст, который нужно проверить на наличие \"БГТУ\": ";
	string text;
	while (text == "") {
		getline(cin, text);
	}

	system("cls");

	int c;
	do {
		cout << "Введите" << endl;
		cout << "1 - одномерный массив" << endl;
		cout << "2 - проверка текста на слово \"БГТУ\" " << endl;
		cout << "3 - выход" << endl;
		cin >> c;
		cin.clear();
		cin.ignore(32767, '\n');
		switch (c)
		{
		case 1:
			// Вызов функции massiv
			task1_massiv(arr, size);
			break;
		case 2:
			// Вызов функции bstu
			task2_bstu(text);
			break;
		case 3:
			break;
		}
	} while (c != 3);
}

void task1_massiv(int* arr, int size)
{
	/*В одномерном массиве, состоящем из вещественных элементов, вычислить номер минимального
	по модулю элемента массива и сумму модулей элементов массива, расположенных после первого отрицательного элемента.*/


	// Вывод массива
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// Номер минимального по модулю элемента массива
	int min = 0;
	for (int i = 0; i < size; i++) {
		if (abs(arr[i]) < abs(arr[min])) {
			min = i;
		}
	}
	cout << "Номер минимального по модулю элемента массива: " << min << endl;

	// Сумма модулей элементов массива, расположенных после первого отрицательного элемента
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			for (int j = i + 1; j < size; j++) {
				sum += abs(arr[j]);
			}
			break;
		}
	}
	cout << "Сумма модулей элементов массива, расположенных после первого отрицательного элемента: " << sum << endl;

	// Удаление массива
	delete[] arr;
}

void task2_bstu(string str)
{
	/*Написать программу, определяющую есть ли во введенном с клавиатуры тексте слово "БГТУ".*/

	// Проверка на наличие "БГТУ" (через цикл)
	bool flag = false;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'Б') {
			if (str[i + 1] == 'Г') {
				if (str[i + 2] == 'Т') {
					if (str[i + 3] == 'У') {
						flag = true;
						break;
					}
				}
			}
		}
	}
	if (flag) {
		cout << "В тексте есть слово \"БГТУ\"" << endl;
	} else {
		cout << "В тексте нет слова \"БГТУ\"" << endl;
	}
}