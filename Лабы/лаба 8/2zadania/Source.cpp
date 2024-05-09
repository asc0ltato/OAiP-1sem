#include <iostream>
#define print cout << "----------------" << endl;

using namespace std;

void first_task()
{
	int y;
	double c = 10.1, z;
	float sum_y = 0;

	for (int i = 0; i < 6; i++)
	{
		cout << "Введите число y: "; cin >> y;
		sum_y += y;
		if (sum_y <= c) {
			z = pow(cos(c), 2);
			z = pow(sin(c), 2);
			cout << "z = sin(c)^2 = " << z << endl;
		}
		else {
			z = pow(sin(c), 2);
			cout << "z = cos(c)^2 = " << z << endl;
		}
	}
}

void second_tack()
{
	double m, x, y = 0, Y, max;
	double arr[5];

	for (int i = 0; i <= 4; i++) {
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

int main()
{
	setlocale(LC_ALL, "rus");
	int choice;
	cout << "Выберите задание: "; cin >> choice;
	switch (choice)
	{
	case 1:
		first_task();
		break;
	case 2:
		second_tack();
		break;
	default:
		cout << "Нет такого задания!" << endl;
		break;
	}
	return 0;
}
