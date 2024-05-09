#include <iostream>
#define print cout << "----------------" << endl;
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double m, x, y = 0, Y, max;
	double arr[4];
	for (int i = 0; i < 4; i++)
	{
		cout << "Введите число x: "; cin >> x;
		arr[i] = x;

		// Поиск максимального элемента
		max = arr[0]; // просто думаю, что максимальный элемент - первый
		for (int j = 0; j < 4; j++) {
			if (arr[j] > max) { // если элемент больше максимального
				max = arr[j];
			}
		}

		print;
		cout << "Максимальное число в массиве: " << max << endl;
		print;

		m = 1 + max;

		Y = pow(arr[i], 2) + m;
		cout << "Y = " << Y << endl;
		y += Y;
		cout << "y = " << y << endl;
		print;
	}
}