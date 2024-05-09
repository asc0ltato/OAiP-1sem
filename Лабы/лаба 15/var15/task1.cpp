#include <stdio.h>	
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*В одномерном массиве, состоящем из n вещественных элементов, вычислить количество элементов массива,
	меньших некоторого заданного числа с, и сумму целых частей элементов массива, расположенных после последнего отрицательного элемента.*/

	// Динамический массив на С
	int n;
	printf("Введите размер массива: ");
	scanf_s("%d", &n);
	double* arr = (double*)malloc(n * sizeof(double));

	// Заполнение массива случайными вещественными числами
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = (rand() % 1000 / 10.0) - 50;
		printf("%5.1lf\t", arr[i]);
	}
	printf("\n");

	// Ввод числа с
	double c;
	printf("Введите число с: ");
	scanf_s("%lf", &c);

	// Подсчет количества элементов массива, меньших числа с
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < c) {
			count++;
		}
	}
	printf("Количество элементов массива, меньших числа с: %d\n", count);

	// Подсчет суммы целых частей элементов массива, расположенных после последнего отрицательного элемента
	double sum = 0;
	int lastNegative = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			lastNegative = i;
		}
	}
	for (int i = lastNegative + 1; i < n; i++) {
		sum += (int)arr[i];
	}
	printf("Сумма целых частей элементов массива, расположенных после последнего отрицательного элемента: %5.1lf\n", sum);

	free(arr);
}