#include <stdio.h>	
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*В одномерном массиве, состоящем из n вещественных элементов, вычислить сумму положительных элементов массива
	и произведение элементов массива, расположенных между максимальным по модулю и минимальным по модулю элементами.*/

	// Динамический массив на С
	int n;
	printf("Введите размер массива: ");
	scanf_s("%d", &n);
	int* arr = (int*)malloc(n * sizeof(int));

	// Заполнение массива случайными числами
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}

	// Вывод массива
	for (int i = 0; i < n; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");

	// Поиск максимального и минимального элемента
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	printf("Максимальный элемент: %d\n", max);
	printf("Минимальный элемент: %d\n", min);

	// Поиск суммы положительных элементов
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			sum += arr[i];
		}
	}
	printf("Сумма положительных элементов: %d\n", sum);

	// Поиск произведения элементов между максимальным и минимальным
	int mult = 1;

	// Поиск индексов максимального и минимального элемента
	int maxIndex = 0;
	int minIndex = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == max) {
			maxIndex = i;
		}
		if (arr[i] == min) {
			minIndex = i;
		}
	}

	// Поиск произведения элементов между максимальным и минимальным
	if (maxIndex > minIndex) {
		for (int i = minIndex + 1; i < maxIndex; i++) {
			mult *= arr[i];
		}
	} else {
		for (int i = maxIndex + 1; i < minIndex; i++) {
			mult *= arr[i];
		}
	}
	printf("Произведение элементов между максимальным и минимальным: %d\n", mult);

	free(arr);
}
